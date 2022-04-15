#include <stdio.h>

int main()
{
    int N, n1, n2, n3, n4, n5, n6;
    printf("Enter the sum of Rs:\n");
    scanf("%d", &N);
    n1 = N / 100;
    N = N % 100;
    n2 = N / 50;
    N = N % 50;
    n3 = N / 10;
    N = N % 10;
    n4 = N / 5;
    N = N % 5;
    n5 = N / 2;
    N = N % 2;
    n6 = N;
    printf("Denominations:\n100=%d\n50=%d\n10=%d\n5=%d\n2=%d\n1=%d\n", n1, n2, n3, n4, n5, n6);
    printf("Smallest number Of Notes=%d", n1 + n2 + n3 + n4 + n5 + n6);
    return 0;
}