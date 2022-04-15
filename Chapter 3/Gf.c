#include <stdio.h>
int main()
{
    int side1, side2, side3, a, b, c;
    printf("Enter the value of three sides:\n");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (side1 == side2 && side1 == side3)
        printf("Equilateral Triangle\n");
    else if (side1 == side2 && side1 != side3 || side2 == side3 && side3 != side1 || side1 == side3 && side3 != side2)
        printf("Isosceles Triangle\n");
    else if (side1 != side2 && side2 != side3 && side1 != side3)
        printf("Scalene Triangle\n");

    a = (side1 * side1) == (side2 * side2) + (side3 * side3);
    b = (side2 * side2) == (side1 * side1) + (side3 * side3);
    c = (side3 * side3) == (side2 * side2) + (side1 * side1);
    if (a || b || c)
        printf("Right angled Triangle\n");
    return 0;
}