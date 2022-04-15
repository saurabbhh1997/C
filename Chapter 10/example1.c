// Printf() and Puts() functions in C

#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = {'S', 'A', 'U', 'R', 'A', 'B', 'H', '\0'};
    char naam[10];
    puts("Enter your first name:");
    gets(naam);
    printf("\n");
    printf("%.5s\n", name);
    printf("%10.5s\n", name);
    puts(naam);
    puts(name);
    printf("%s\n", naam);
    printf("%s\n", &naam);
    printf("%s\n", &naam[2]);
    printf("\n");
    return 0;
}