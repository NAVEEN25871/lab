#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    printf("Enter rows & cols of A: ");
    scanf("%d%d", &m, &n);
    printf("Enter rows & cols of B: ");
    scanf("%d%d", &p, &q);
    if (n != p) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    int A[m][n], B[p][q], C[m][q];

    printf("Enter A (%d x %d):\n", m, n);
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
            scanf("%d", &A[i][j]);
    printf("Enter B (%d x %d):\n", p, q);
    for (i=0;i<p;i++)
        for (j=0;j<q;j++)
            scanf("%d", &B[i][j]);
    for (i=0;i<m;i++)
        for (j=0;j<q;j++) {
            C[i][j]=0;
            for (k=0;k<n;k++)
                C[i][j]+=A[i][k]*B[k][j];
        }
    printf("\nMatrix A:\n");
    for (i=0;i<m;i++){ for (j=0;j<n;j++) printf("%4d",A[i][j]); printf("\n"); }

    printf("\nMatrix B:\n");
    for (i=0;i<p;i++){ for (j=0;j<q;j++) printf("%4d",B[i][j]); printf("\n"); }

    printf("\nA x B:\n");
    for (i=0;i<m;i++){ for (j=0;j<q;j++) printf("%4d",C[i][j]); printf("\n"); }

    return 0;
}
