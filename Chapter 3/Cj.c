//Co-linearity of three points

#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, x3, y1, y2, y3, s1, s2, s3;
    printf("Enter the value x1 and y1 coordinates:\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the value x2 and y2 coordinates:\n");
    scanf("%d%d", &x2, &y2);
    printf("Enter the value x3 and y3 coordinates:\n");
    scanf("%d%d", &x3, &y3);
    s1 = abs(y2 - y1) / abs(x2 - x1);
    s2 = abs(y3 - y1) / abs(x3 - x1);
    s3 = abs(y3 - y2) / abs(x3 - x2);
    if (s1 == s2 && s1 == s3)
        printf("Points are co-linear\n");
    else
        printf("Points are not co-linear\n");
    return 0;
}