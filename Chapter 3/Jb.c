/*
#include <stdio.h>
int main()
{
    int code;
    scanf("%d", &code);
    if (code > 1)
        printf("Jerusalem\n");
    else if (code < 1)
        printf("Eddie\n");
    else
        printf("C brain\n");
    return 0;
}
*/
// Rewrite

#include <stdio.h>
int main()
{
    int code;
    scanf("%d", &code);
    (code > 1 ? printf("Jerusalem\n") : (code < 1 ? printf("Eddie\n") : printf("C brain\n")));
    return 0;
}