#include <stdio.h>
int main()
{
    int i = 1;
    switch (i - 2)
    {
    case -1:
        printf("Feeding fish\n");
    case 0:
        printf("Wedding grash\n");
    case1:
        printf("Mending roof\n");
    default:
        printf("Just to survive\n");
    }
    return 0;
}

// Output---------> All case would be executed