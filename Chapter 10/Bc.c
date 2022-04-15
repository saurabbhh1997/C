#include <stdio.h>
int main()
{
    char arr[8] = "Rhombus";
    char i;
    for (i = 0; i <= 7; i++)
        printf("%d", *arr);
    // arr++;
    return 0;
}

// Error.In arr++ statement. As you can see that arr[8] is initialized at the time of declaration.
// So, in that case, we cannot assign anything to arr, and statement arr++ is execute as arr = arr + 1, which is illegal.
