#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num, i, j, k, l;
	for (num = 1; num < 5000; num++)
	{
		for (i = 1; i < num; i++)
		{
			if (num < i*i*i)
				break;
			for (j = i + 1; j < num; j++)
			{
				if (num < j*j*j)
					break;
				for (k = i + 1; k < num; k++)
				{
					if (k*k*k > i*i*i + j*j*j)
						break;
					for (l = k + 1; l < num; l++)
					{
						if (num < k*k*k + l*l*l)
							break;
						if ((num == i*i*i + j*j*j) && (num == k*k*k + l*l*l))
						{
							printf("\n%d^3 + %d^3 = %d^3 + %d^3 = num : %d",i, j, k, l, num);
							break;
						}
					}
				}
			}
		}
	}
	_getch();
	return 0;
}