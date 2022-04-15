#include <stdio.h>
void message();
int main()
{
    message();
    message();
    return 0;
}

void message()
{
    printf("Praise worthy and C worthy are synonyms\n");
}

// No error. two times message will be printed