//Program to print smiley on whole console

#include <stdio.h>
int main()
{
    int i, j, smile = 1;
    for (j = 1; j <= 50; j++)
    {

        for (i = 1; i <= 160; i++)
        {
            printf("%c", smile);
        }
        printf("\n");
    }
    return 0;
}