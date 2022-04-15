#include <stdio.h>
int main()
{
    int threed[3][2][3] = {
        {{1, 2, 3},
         {4, 5, 6}},
        {{7, 8, 9},
         {11, 12, 13}},
        {{4, 9, 3},
         {6, 25, 61}}};
    printf("%d %d\n", threed[0][0][0], threed[2][1][2]);
    return 0;
}