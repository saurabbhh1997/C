// Included in Cc.c file

#include <math.h>

#define AREA_TRI(a, b, c) (sqrt(semi*(semi-a)*(semi-b)*(semi-c))
#define PERI_TRI(a, b, c) (a + b + c)
#define AREA_SQR(a) (a * a)
#define PERI_SQR(a) (4 * a)
#define AREA_CIR(r) (3.141 * r * r)
#define PERI_CIR(r) (2 * 3.141 * r)
// some problem in  AREA_TRI