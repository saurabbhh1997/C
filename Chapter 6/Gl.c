#include <stdio.h>
int great_comm_div(int, int);

int main()
{
    int num1, num2;
    int gcd;
    printf("Enter two numbers\n");
    scanf("%d%d", &num1, &num2);
    gcd = great_comm_div(num1, num2);
    printf("Greatest common divisior is %d\n",gcd);
    return 0;
}

int great_comm_div(int a, int b)
{
    int big_num, small_num, i, new_small_num, div;
    for (i = 1; new_small_num; i++)
    {

        if (a > b)
        {
            big_num = a;
            small_num = b;
        }
        else
        {
            big_num = b;
            small_num = a;
        }

        div = big_num / small_num;
        new_small_num = (big_num - div * small_num);
        a = small_num;
        b = new_small_num;
    }
    return (small_num);
}