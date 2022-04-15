#include <stdio.h>
void display();
int main()
{
    printf("Learn C\n");
    display();
    return 0;
}

void display()
{
    printf("Followed by C++,C# and Java\n");
    main();
}

//Output----->Infinite loop