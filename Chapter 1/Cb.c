#include <stdio.h>

int main()
{
    float kilo_meter, inch;
    float meter, centi_meter, feet;
    printf("Enter the distance between cities in KM:\n");
    scanf("%f", &kilo_meter);
    meter = 1000 * kilo_meter;
    centi_meter = meter * 100;
    inch = centi_meter / 2.54;
    feet = inch / 12;
    printf("Distance in Meters=%f\nin Feets=%f\nin Centimeters=%f\nin Inch=%f", meter, feet, centi_meter, inch);
    return 0;
}
