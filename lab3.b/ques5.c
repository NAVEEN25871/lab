#include <stdio.h>

int main() {
    int limit = 200000; 
    for (int a = 1; a * a * a < limit; a++) {
    for (int b = a; b * b * b < limit; b++) {
    for (int c = a + 1; c * c * c < limit; c++) {
    for (int d = c; d * d * d < limit; d++) {
    if (a*a*a + b*b*b == c*c*c + d*d*d) {
    printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
    a*a*a + b*b*b, a, b, c, d);
    }
    }
    }
    }
    }
    return 0;
}