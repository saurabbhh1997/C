#include <stdio.h>

int main()
{
    float frht, cent;
    printf("Enter the temperature(F):");
    scanf("%f", &frht);
    cent = 5.0 / 9.0 * (frht - 32);
    printf("Temperature in Centigrade=%f\n", cent);
    return 0;
}
