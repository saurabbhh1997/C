#include <stdio.h>
int main()
{
    char s[] = "Get organised!learn C!!";
    printf("%s\n", &s[2]);
    printf("%s\n", s);
    printf("%s\n", &s);
    printf("%c\n", s[2]);
    return 0;
}

// Output------>2nd and 3rd will print Get organised! learn  C!!
// while 1st will print t organised!learn C!! 