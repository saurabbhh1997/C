#include <stdio.h>

int main()
{
    int c, d, temp;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &c, &d);
    temp = c;
    c = d;
    d = temp;
    printf("Interchanged content=%d  %d", c, d);
    return 0;
}