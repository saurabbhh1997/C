#include <stdio.h>

int main()
{
    int a0ht, a0wd;
    int a1ht, a1wd, a2ht, a2wd;
    int a3ht, a3wd, a4ht, a4wd;
    int a5ht, a5wd, a6ht, a6wd;
    int a7ht, a7wd, a8ht, a8wd;

    a0ht = 1189;
    a0wd = 841;
    printf("Size of A0 paper Height=%d Width=%d\n", a0ht, a0wd);
    a1ht = a0wd;
    a1wd = a0ht / 2;
    printf("Size of A1 paper Height=%d Width=%d\n", a1ht, a1wd);
    a2ht = a1wd;
    a2wd = a1ht / 2;
    printf("Size of A2 paper Height=%d Width=%d\n", a2ht, a2wd);
    a3ht = a2wd;
    a3wd = a2ht / 2;
    printf("Size of A3 paper Height=%d Width=%d\n", a3ht, a3wd);
    a4ht = a3wd;
    a4wd = a3ht / 2;
    printf("Size of A4 paper Height=%d Width=%d\n", a4ht, a4wd);
    a5ht = a4wd;
    a5wd = a4ht / 2;
    printf("Size of A5 paper Height=%d Width=%d\n", a5ht, a5wd);
    a6ht = a5wd;
    a6wd = a5ht / 2;
    printf("Size of A6 paper Height=%d Width=%d\n", a6ht, a6wd);
    a7ht = a6wd;
    a7wd = a6ht / 2;
    printf("Size of A7 paper Height=%d Width=%d\n", a7ht, a7wd);
    a8ht = a7wd;
    a8wd = a7ht / 2;
    printf("Size of A8 paper Height=%d Width=%d\n", a8ht, a8wd);
    return 0;
}