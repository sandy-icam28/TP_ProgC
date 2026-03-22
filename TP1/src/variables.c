#include <stdio.h>

int main() {
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 250;
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);
    
    short s = -32000;
    unsigned short us = 65000;
    printf("short : %d\n", s);
    printf("unsigned short : %u\n\n", us);

    int i = -100000;
    unsigned int ui = 100000;
    printf("int : %d\n", i);
    printf("unsigned int : %u\n\n", ui);

    long l = -1000000L;
    unsigned long ul = 1000000UL;
    printf("long : %ld\n", l);
    printf("unsigned long : %lu\n\n", ul);

    long long ll = -10000000000LL;
    unsigned long long ull = 10000000000ULL;
    printf("long long : %lld\n", ll);
    printf("unsigned long long : %llu\n\n", ull);

    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793L;
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
