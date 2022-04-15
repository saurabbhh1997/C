/*
#include <stdio.h>
int main()
{
    int x, min, max;
    //printf("Enter the two Numbers:\n");
    scanf("%d%d", &max, &x);
    if (x > max)
        max = x;
    else
        min = x;
    return 0;
}
*/
// Rewrite

#include <stdio.h>
int main()
{
    int x, min, max;
    scanf("%d%d", &max, &x);
    (x > max) ? (max = x) : (min = x);
    return 0;
}