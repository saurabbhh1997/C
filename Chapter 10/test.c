#include <stdio.h>
int main()
{
    int a = 10;
    float b = 10.5;
    char c = 'D';
    void *p;
    p = &a;
    printf("a=%d\n", *(int *)p);
    p = &b;
    printf("b=%f\n", *(float *)p);
    p = &c;
    printf("c=%c\n", *(char *)p);
    return 0;
}