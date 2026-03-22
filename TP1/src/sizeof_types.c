#include <stdio.h>
#include <string.h>

int main() {
printf("Taille des types en C (en octets) :\n\n");

    // Types caractère
    printf("char               : %zu octets\n", sizeof(char));
    printf("signed char        : %zu octets\n", sizeof(signed char));
    printf("unsigned char      : %zu octets\n\n", sizeof(unsigned char));

    // Types entiers courts
    printf("short              : %zu octets\n", sizeof(short));
    printf("unsigned short     : %zu octets\n\n", sizeof(unsigned short));

    // Types entiers standards
    printf("int                : %zu octets\n", sizeof(int));
    printf("unsigned int       : %zu octets\n\n", sizeof(unsigned int));

    // Types entiers longs
    printf("long               : %zu octets\n", sizeof(long));
    printf("unsigned long      : %zu octets\n\n", sizeof(unsigned long));

    // Très grands entiers
    printf("long long          : %zu octets\n", sizeof(long long));
    printf("unsigned long long : %zu octets\n\n", sizeof(unsigned long long));

    // Types flottants
    printf("float              : %zu octets\n", sizeof(float));
    printf("double             : %zu octets\n", sizeof(double));
    printf("long double        : %zu octets\n", sizeof(long double));

    return 0;
}

