#include <stdio.h>
int main()
{
    int x = 20, y = 40, z = 45;
    if (x > y && x > z)
        printf("Biggest=%d\n", x);
    else if (y > x && y > z)
        printf("Biggest=%d\n", y);
    else if (z > x && z > y)
        printf("Biggest=%d\n", z);
    return 0;
}

//Answer----------->Biggest=45 would be printed;