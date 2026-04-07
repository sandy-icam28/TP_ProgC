#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    int c = a;
    for (int i = 1; i < b; i++) {
        c = c * a;
    }
    printf("%d", c);
}
