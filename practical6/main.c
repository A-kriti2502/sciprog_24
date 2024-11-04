#include <stdio.h>
void mathmult(int n , int p, int q, double A[n][p], double B[p][q],double C[n][q]);

int main(){
    int n = 5, p = 3, q = 4;
    double A[n][p], B[p][q], C[n][q];
    int i, j, k;

    // Initialize A
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            A[i][j] = i + j;
        }
    }

    // Initialize B
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            B[i][j] = i - j;
        }
    }

    // Initialize C to zero
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0.0;
        }
    }
// Matrix multiplication
    mathmult(n,p,q,A,B,C);
/*
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
*/
    // Print the A matrix
    printf("\nThe A matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%6.2f ", A[i][j]);
        }
        printf("\n");
    }

    // Print the B matrix
    printf("\nThe B matrix is:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%6.2f ", B[i][j]);
        }
        printf("\n");
    }

    // Print the resultant C matrix
    printf("\nThe C matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            printf("%6.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
