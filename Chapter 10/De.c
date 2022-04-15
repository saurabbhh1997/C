#include <stdio.h>
#include <string.h>
int main()
{
    char x[30] = "a", z[30];
    char y[30] = "b";
    int i;
    printf("\n\n");
    for (i = 0; i <= 5; i++)
    {
        printf("f(%d)=%s\t", i, x);
        strcpy(z, x);
        strcpy(x, y);
        strcat(y, z);
    }
    printf("\n\n");
    return 0;
}