#include <iostream>
#include <cstdio>

int main()
{
    int anInteger;
    long anLong;
    char aChar;
    float aFloat;
    double aDouble;

    scanf("%d %ld %c %f %lf", &anInteger, &anLong, &aChar, &aFloat, &aDouble);

    printf("%d\n%ld\n%c\n%f\n%lf", anInteger, anLong, aChar, aFloat, aDouble);

    return 0;
}