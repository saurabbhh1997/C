#include <stdio.h>

int main()
{
    int sum, sub_a, sub_b, sub_c, sub_d, sub_e;
    int agg_marks;
    float per_marks;
    printf("Enter the marks:\n");
    scanf("%d%d%d%d%d", &sub_a, &sub_b, &sub_c, &sub_d, &sub_e);
    sum = (sub_a + sub_b + sub_c + sub_d + sub_e);
    agg_marks = sum;
    per_marks = (sum / 5);
    printf("Aggregate marks=%d\nPercentage marks=%f", agg_marks, per_marks);
    return 0;
}
