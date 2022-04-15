/*
Point out errors,if any,in the following programs.


{a}
#include <stdio.h>
int main()
{
    int tag = 0, code = 1;
    if (tag == 0)
        (code > 1 ? printf("Hello\n") ? printf("Hi\n"));
    else
        printf("Hello Hi\n");
    return 0;
}
Answer------------->Error

{b}
#include <stdio.h>
int main()
{
    int j = 65;
    printf("j>=65?%d:%c\n", j);
    return 0;
}
Answer------->j>=65?65:h No error

{c}
#include <stdio.h>
int main()
{
    int i = 10, j;
    i >= 5 ? (j = 10) : (j = 15);
    printf("%d %d\n", i, j);
    return 0;
}
Answer-------------->10 10 No error

{d}
#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    (a == b ? printf("%d\n,a"));
    return 0;
}
Answer------------>Error

{e}
#include <stdio.h>
int main()
{
    int n = 9;
    (n == 9 ? printf("Correct|n"); : printf("Wrong\n"););
    return 0;
}
Answer---------------->Error

{f}
#include <stdio.h>
int main()
{
    int kk = 65, ll;
    ll = (kk == 65 : printf("kk==65\n") : printf("kk!=65\n"));
    return 0;
}
Answer------------>Error

{g}
#include <stdio.h>
int main()
{
    int x = 10, y = 20;
    x == 20 && y != 10 ? printf("true") : printf("false");
    return 0;
}
Answer-------------->False,No error
*/