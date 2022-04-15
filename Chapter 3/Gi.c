#include <stdio.h>
int main()
{
    float weight;
    printf("Enter the weight of the boxer:\n");
    scanf("%f", &weight);
    if (weight < 115)
        printf("Class=Flyweight\n");
    else if (weight >= 115 && weight <= 121)
        printf("Class=Bantanweight\n");
    else if (weight >= 122 && weight <= 153)
        printf("Class=Featherweight\n");
    else if (weight >= 154 && weight <= 189)
        printf("Class=Middleweight\n");
    else if (weight >= 190)
        printf("Class=Heavyweight\n");
    return 0;
}