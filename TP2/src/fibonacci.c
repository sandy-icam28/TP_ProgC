#include <stdio.h>

int main() {
    int n = 9;
    int un2 = 0;
    int un1 = 1;
    int u;
    printf("U0 = %d \n", un2);
    printf("U1 = %d \n", un1);
    for (int i = 2; i < n; i++) {
        u = un1 + un2;
        printf("U%d = %d \n", i, u);
        un2 = un1;
        un1 = u;
    }
}
