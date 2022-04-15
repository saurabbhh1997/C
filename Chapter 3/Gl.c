#include <stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter the Weight(inKg)and Height(inMeter):\n");
    scanf("%f%f", &weight, &height);

    //BMI=kg/m^2(kg per meter square)
    bmi = weight / (height*height);

    if (bmi < 15.000000)
        printf("BMI Category:Starvation\n");

    else if (bmi >= 15.199999 && bmi <= 17.599999)
        printf("BMI Category:Anorexic\n");

    else if (bmi >= 17.600000 && bmi <= 18.599999)
        printf("BMI Category:underweight\n");

    else if (bmi >= 18.600000 && bmi <= 24.999999)
        printf("BMI Category:Ideal\n");

    else if (bmi >= 25.000000 && bmi <= 29.999999)
        printf("BMI Category:Overwieght\n");

    else if (bmi >= 30.00000 && bmi <= 39.999999)
        printf("BMI Category:Obese\n");

    else if (bmi >= 40)
        printf("BMI Category:Morbidly Obese\n");

    return 0;
}