#include <stdio.h>

int main()
{
    int num, rev_num = 0, a;
    printf("Enter a five digit num:\n");
    scanf("%d", &num);
    a = num % 10;
    num = num / 10;
    rev_num = rev_num + a * 10000;
    a = num % 10;
    num = num / 10;
    rev_num = rev_num + a * 1000;
    a = num % 10;
    num = num / 10;
    rev_num = rev_num + a * 100;
    a = num % 10;
    num = num / 10;
    rev_num = rev_num + a * 10;
    a = num % 10;
    rev_num = rev_num + a;
    printf("Reversed number is:%d", rev_num);
    return 0;
}
