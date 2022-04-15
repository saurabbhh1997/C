#include <stdio.h>
void message();
int main()
{
    int a;
    // a = message();
    return 0;
}

void message()
{
    printf("Viruses are written in C\n");
    return;
}

//Error-a value of type "void" cannot be assigned to an entity of type "int"