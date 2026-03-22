#include <stdio.h>

int main() {
    // Types caractère
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 250;

    // Types entiers courts
    short s = -32000;
    unsigned short us = 65000;

    // Types entiers standards
    int i = -100000;
    unsigned int ui = 100000;

    // Types entiers longs
    long l = -1000000L;
    unsigned long ul = 1000000UL;

    // Très grands entiers
    long long ll = -10000000000LL;
    unsigned long long ull = 10000000000ULL;

    // Types flottants
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793L;

    // Affichage
    printf("=== Types caractère ===\n");
    printf("char               : %c\n", c);
    printf("signed char        : %d\n", sc);
    printf("unsigned char      : %u\n\n", uc);

    printf("=== Entiers courts ===\n");
    printf("short              : %d\n", s);
    printf("unsigned short     : %u\n\n", us);

    printf("=== Entiers standards ===\n");
    printf("int                : %d\n", i);
    printf("unsigned int       : %u\n\n", ui);

    printf("=== Entiers longs ===\n");
    printf("long               : %ld\n", l);
    printf("unsigned long      : %lu\n\n", ul);

    printf("=== Très grands entiers ===\n");
    printf("long long          : %lld\n", ll);
    printf("unsigned long long : %llu\n\n", ull);

    printf("=== Types flottants ===\n");
    printf("float              : %f\n", f);
    printf("double             : %lf\n", d);
    printf("long double        : %Lf\n", ld);

    return 0;
}
