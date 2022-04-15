#include <stdio.h>
#include <string.h>
int main()
{
    printf("Size of short int= %hd Bytes\n", sizeof(short int));
    // printf("%d\n", sizeof(short int));
    printf("Size of unsigned short int= %hu Bytes\n", sizeof(unsigned short int));
    // printf("%d\n", sizeof(unsigned short int));
    printf("Size of signed int= %u Bytes\n", sizeof(signed int));
    // printf("%d\n", sizeof(signed int));
    printf("Size of long int= %ld Bytes\n", sizeof(long int));
    // printf("%d\n", sizeof(long int));
    printf("Size of unsigned long int= %lu Bytes\n", sizeof(unsigned long int));
    // printf("%d\n", sizeof(unsigned long int));
    printf("%lld\n", sizeof(long long int));
    printf("Size of long long int= %d Bytes\n", sizeof(long long int));
    printf("%llu\n", sizeof(unsigned long long int));
    printf("Size of unsigned long long int= %d Bytes\n", sizeof(unsigned long long int));
    // printf("%c\n", sizeof(signed char));
    printf("Size of signed char= %d Bytes\n", sizeof(signed char));
    // printf("%f\n",sizeof(float));
    printf("Size of float= %d Bytes\n", sizeof(float));
    // printf("%lf\n",sizeof(double));
    printf("Size of double= %d Bytes\n", sizeof(double));
    // printf("%Lf\n",sizeof(long double));
    printf("Size of long double= %d Bytes\n", sizeof(long double));
}