#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,a;
	float sum,act,term,x;
	
	printf("Enter the value of x : ");
	scanf("%f", &x);
	
	a=2;
	term=(x-1)/x;
	sum=term;
	
	for(i=1;i<=6;i++)
	{
		act=pow(term,a)/2;//series according to the book.
		//act=pow(term,a)/a; //actual natural log series.
		sum=sum+act;
		a++;
	}
	
	printf("%f is the sum of the series.\n", sum);
	
	getch();
	return 0;
}
