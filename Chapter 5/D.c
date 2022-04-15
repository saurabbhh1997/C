#include <stdio.h>
int main()
{
    int grace_marks, sub_failed, class;
    printf("Enter the class obtained:\n");
    scanf("%d", &class);
    printf("Enter the number of subjects failed:\n");
    scanf("%d", &sub_failed);
    switch (class)
    {
    case 1:
        if (sub_failed > 3)
            printf("No grace marks\n");
        else
        {
            grace_marks = 5 * sub_failed;
            printf("Grace marks=%d\n", grace_marks);
        }
        break;

    case 2:
        if (sub_failed > 2)
            printf("No grace marks\n");
        else
        {
            grace_marks = 4 * sub_failed;
            printf("Grace marks=%d\n", grace_marks);
        }
        break;
    case 3:
        if (sub_failed > 1)
            printf("No grace marks\n");
        else
        {
            grace_marks = 5;
            printf("No grace marks\n");
        }
    }
    return 0;
}