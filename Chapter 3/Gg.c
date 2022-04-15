#include <stdio.h>
int main()
{
    float time;
    printf("Enter the time taken by the worker:\n");
    scanf("%f", &time);
    if (time >= 0.000001 && time < 3)
        printf("Highly efficient\n");
    else if (time >= 3 && time < 4)
        printf("Improvement required\n");
    else if (time >= 4 && time < 5)
        printf("Training required for improvement\n");
    else if (time > 5)
        printf("Terminated\n");
    return 0;
}