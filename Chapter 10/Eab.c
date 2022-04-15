//[A]
#include <stdio.h>
int main()
{
    char *mess[] = {
        "Hammer and tongs",
        "Tooth and nails",
        "Spit and polish",
        "You and C"};
    return 0;
}

// Size occupied by array of pointers to strings=58bytes
// Size occupied by same string,if they are stored in a two-dimensional character array=68bytes

//[B]

// Generally,we can't recieve the string from keyboard using scanf() but we can address this issue using
// standard library function malloc().