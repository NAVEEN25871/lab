#include <stdio.h>

long factRec(int n) {
    if (n == 0)
        return 1;
    else
        return n * factRec(n - 1);
}

long factNonRec(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, r;
    long nCr;

    printf("Enter n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    nCr = factRec(n) / (factNonRec(r) * factNonRec(n - r));

    printf("\nBinomial Coefficient (nCr) = %ld\n", nCr);

    printf("\nTable of nCr for values of r = 0 to n:\n");
    for (r = 0; r <= n; r++) {
        nCr = factRec(n) / (factNonRec(r) * factNonRec(n - r));
        printf("C(%d, %d) = %ld\n", n, r, nCr);
    }

    return 0;
}
