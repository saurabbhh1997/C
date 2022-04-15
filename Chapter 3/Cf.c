#include <stdio.h>
int main()
{
    int ram_age, shyam_age, ajay_age;
    printf("Enter the age of Ram, Shyam, and Ajay:\n");
    scanf("%d%d%d", &ram_age, &shyam_age, &ajay_age);
    if (ram_age < shyam_age && ram_age < ajay_age)
        printf("Ram is youngest\n");
    else if (shyam_age < ram_age && shyam_age < ajay_age)
        printf("Shyam is youngest\n");
    else
        printf("Ajay is youngest\n");
    return 0;
}