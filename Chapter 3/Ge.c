#include <stdio.h>
int main()
{
    int side1, side2, side3, sum, largest;
    printf("Enter the three sides of the triangle:\n");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1 > side2 && side1 > side3)
    {
        largest = side1;
        sum = side2 + side3;
    }
    else if (side2 > side1 && side2 > side3)
    {
        largest = side2;
        sum = side1 + side3;
    }
    else if (side3 > side1 && side3 > side2)
    {
        largest = side3;
        sum = side1 + side2;
    }
    if (sum > largest)
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid");
    return 0;
}