#include<stdio.h>
int main()
{
    int bonus,cy,yoj,yos;
    printf("Enter current year and year of joining:");
    scanf("%d%d",&cy,&yoj);
    yos=cy-yoj;
    if(yos>3)
    {
        bonus=2500;
        printf("Bonus=Rs.%d\n",bonus);
    }
    return 0;
}