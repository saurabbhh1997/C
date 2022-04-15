#include <stdio.h>
// int char mixed[100];
int main()
{
    int a[10], i;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", a[i]);
        printf("%d\n", a[i]);
    }
    return 0;
}

// Output-->Error i should be initialised with 0 insted of 1 and mixed can not have two data types