#include <stdio.h>

int main()
{
    int num, new_num = 0, a;
    printf("Enter a five digit number:\n");
    scanf("%d", &num);
    a = num % 10;
    new_num = new_num + (a + 1);
    num = num / 10;
    a = num % 10;
    new_num = new_num + 10 * (a + 1);
    num = num / 10;
    a = num % 10;
    new_num = new_num + 100 * (a + 1);
    num = num / 10;
    a = num % 10;
    new_num = new_num + 1000 * (a + 1);
    num = num / 10;
    a = num % 10;
    new_num = new_num + 10000 * (a + 1);
    printf("New number is:%d", new_num);
    return 0;
}
