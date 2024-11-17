#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;
    // TODO: Checking that every row and column add up to M
    
    for (int i = 0; i < n; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += square[i][j];
            colSum += square[j][i];
        }
        if (rowSum != M || colSum != M) {
            return 0; // Not a magic square
        }
    }
    // TODO: Checking that the main and secondary
    // diagonals each add up to M
    // If passed all checks, it is a magic square
    int mainDiagSum = 0;
    for (int i = 0; i < n; i++) {
        mainDiagSum += square[i][i];
    }
    if (mainDiagSum != M) {
        return 0; // Main diagonal does not match
    }

    // Check secondary diagonal
    int secDiagSum = 0;
    for (int i = 0; i < n; i++) {
        secDiagSum += square[i][n - i - 1];
    }
    if (secDiagSum != M) {
        return 0; // Secondary diagonal does not match
    }

    return 1;
}

