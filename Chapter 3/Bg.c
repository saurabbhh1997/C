#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", a, b);  //No error ----------->& should be used in scanf(,&a,&b);
    if (a > b)
        printf("This is game\n");
    else
        printf("You have to play it\n");
    return 0;
}