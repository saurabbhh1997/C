#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, m, n;
    printf("Enter the sentence(MAX 100 characteres)\n");
    gets(str);
    printf("Enter the position from where characters should be extracted:");
    scanf("%d", &m);
    m--;
    printf("Enter the number of characters needs to be extracted:");
    scanf("%d", &n);
    if (n == 0)
        printf("%s\n", str);
    else
    {
        for (i = m; i <= m + n; i++)
            printf("%c", str[i]);
    }

    return 0;
}