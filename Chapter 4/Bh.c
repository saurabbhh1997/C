#include <stdio.h>
#include <math.h>

int main()
{
    int integer, div, oct, rem, i;
    printf("Enter an integer:");
    scanf("%d", &integer);
    div = integer;
    i = oct = 0;
 
    while (div > 0)
    {
        rem = div % 8;
        div = div / 8;
        oct = oct + rem * pow(10, i);
        i++;
    }

    printf("The octal equivalent of %d is %d\n", integer, oct);
    return 0;
}