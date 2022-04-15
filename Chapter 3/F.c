/*
Point out the errors,if any,in the following programs.

{a}
#include <stdio.h>
int main()
{
    int i = 2, j = 5;
    if (i == 2 && j == 5)
        printf("Satisfied at last\n");
    return 0;
}
Answer------------->Satisfied at last No error

{b}
#include <stdio.h>
int main()
{
    int code, flag;
    if (code == 1 && flag == 0)
        printf("The eagle has landed\n");
    return 0;
}
Answer--------->No error but no output

{c}
#include <stdio.h>
int main()
{
    char spy = 'a', password = 'z';
    if (spy == 'a' or password == 'z')
        printf("All the birds are safe in the nest\n");
    return 0;
}
Answer-------->Error or--:||

{d}
#include <stdio.h>
int main()
{
    int i = 10, j = 20;
    if (i = 5) && if (j = 10)
            printf("Have a nice day\n");
    return 0;
}
Answer------>Error

{e}
#include <stdio.h>
int main()
{
    int x = 10, y = 20;
    if (x >= 20 and y <= 50)
        printf("%d\n", x);
}
Answer------------>Error

{f}
#include <stdio.h>
int main()
{
    int a, b;
    if (a == 1 & b = 0)
        printf("God is great\n");
    return 0;
}
Answer------------->Error

{g}
#include <stdio.h>
int main()
{
    int x = 2;
    if (x == 2 && x != 0)
        ;
    printf("Hello\n");
    else printf("bye\n");
    return 0;
}
Answer----------->Error

{h}
#include <stdio.h>
int main()
{
    int i = 10, j = 10;
    if (i && j == 10)
        printf("Have a nice day\n");
    return 0;
}
Answer---------->Have a nice day  No error
*/