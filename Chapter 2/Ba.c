#include <stdio.h>

int main()
{
   int ans, a, b, x, y;
   a = 3, b = 2, x = 5, y = 4;
   ans = 5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y;
   printf("ans=%d", ans);
   return 0;
}