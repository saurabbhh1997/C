//Greatest of three numbers using conditional operators

#include <stdio.h>
int main()
{
    int num_1, num_2, num_3;
    printf("Enter the numbers:\n");
    scanf("%d%d%d", &num_1, &num_2, &num_3);
    (num_1 > num_2) 
    ? (num_1 > num_3) 
        ? printf("%d is biggest\n", num_1) 
        : printf("%d is biggest\n", num_3)
    : (num_2 > num_3) 
        ? printf("%d is biggest\n", num_2)
        : printf("%d is biggest\n", num_3);
    return 0;
}