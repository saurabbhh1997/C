#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float distance(int, int, int, int);
float area(float, float, float);
int position(float, float, float, int, int, int, int, int, int, int, int);

int main()
{
    int x, x1, x2, x3, y, y1, y2, y3, pos;
    float ar, a, b, c;
    printf("Enter the point A(x1,y1):\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the point B(x2,y2):\n");
    scanf("%d%d", &x2, &y2);
    printf("Enter the point C(x3,y3):\n");
    scanf("%d%d", &x3, &y3);

    a = distance(x1, y1, x2, y2);
    b = distance(x2, y2, x3, y3);
    c = distance(x3, y3, x1, y1);

    printf("Distance btween A and B=%f\n", a);
    printf("Distance btween B and C=%f\n", b);
    printf("Distance btween C and A=%f\n", c);

    ar = area(a, b, c);
    printf("Area=%f\n", ar);

    if (ar == 0)
        exit(0);

    printf("Enter the Point O(x,y):\n");
    scanf("%d%d", &x, &y);

    pos = position(a, b, c, x, y, x1, y1, x2, y2, x3, y3);
    if (pos == 1)
        printf("Point lies inside the triangle\n");
    else
        printf("Point does not lie inside the triangle\n");
    return 0;
}

float distance(int x1, int y1, int x2, int y2)
{
    float dis;
    dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return (dis);
}

float area(float a, float b, float c)
{
    float s, ar;
    s = (a + b + c) / 2;
    if (a + b > c && b + c > a && a + c > b)
    {
        ar = sqrt(s * (s - a) * (s - b) * (s - c));
        return (ar);
    }
    else
    {
        printf("Invalid triangle\n");
        return 0;
    }
}

int position(float a, float b, float c, int x, int y, int x1, int y1, int x2, int y2, int x3, int y3)
{
    float oa, ob, oc;
    oa = distance(x, y, x1, y1);
    ob = distance(x, y, x2, y2);
    oc = distance(x, y, x3, y3);
    if ((oa + ob + oc) < (a + b + c))
        return 1;
    else
        return 0;
}