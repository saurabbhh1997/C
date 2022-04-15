#include <stdio.h>
int main()
{
    float hardness, carbon_content, tensile_strength;
    printf("Enter the value of Hardness:\n");
    scanf("%f", &hardness);
    printf("Enter the value of Carbon content:\n");
    scanf("%f", &carbon_content);
    printf("Enter the value of Tensile strength:\n");
    scanf("%f", &tensile_strength);
    if (hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
        printf("Grade 10\n");
    else if (hardness > 50 && carbon_content < 0.7 && tensile_strength <= 5600)
        printf("Grade 9\n");
    else if (hardness <= 50 && carbon_content < 0.7 && tensile_strength > 5600)
        printf("Grade 8\n");
    else if (hardness > 50 && carbon_content >= 0.7 && tensile_strength > 5600)
        printf("Grade 7\n");
    else if (hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600)
        printf("Grade 6\n");
    else
        printf("Grade 5\n");
    return 0;
}