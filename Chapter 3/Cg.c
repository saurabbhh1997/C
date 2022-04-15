//Triangle is valid or not

#include <stdio.h>
int main()
{
    int angle_1, angle_2, angle_3, sum;
    printf("Enter the three angles of the triangle:\n");
    scanf("%d%d%d", &angle_1, &angle_2, &angle_3);
    sum = angle_1 + angle_2 + angle_3;
    if (sum == 180)
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid\n");
    return 0;
}