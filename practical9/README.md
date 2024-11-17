# Practical 9: Magic Square Problem

## Overview
In this practical, we will focus on reading input from a file to implement the **Magic Square** problem. The task involves checking if a given square matrix meets the criteria to be classified as a *magic square* by verifying the sums of its rows, columns, and diagonals.

## Objectives
- Learn how to read input from a file and handle file I/O in C.
- Implement logic to verify if a matrix qualifies as a magic square.
- Practice dynamic memory allocation for matrices in C.
- Understand the significance of freeing allocated memory.

## Exercises

### Task Breakdown
1. **Function `isMagicSquare`:**
   - Implemented in the file `magic_square.h` or `magic_square_stub.h`.
   - Checks whether a square matrix has all rows, columns, and diagonals summing to the same value M = n(n^2 + 1) /2, where n is the side length of the matrix.

2. **Main Function:**
   - Implemented in `main.c`.
   - Reads the size n of the matrix and its elements from a file named `magic_square.txt`.
   - Passes the matrix to `isMagicSquare` for validation.
   - Outputs whether the matrix is a magic square.

3. **File Input:**
   - The file `magic_square.txt` must contain the matrix size followed by the matrix elements. Ensure the format allows for correct parsing.

4. **Memory Management:**
   - Dynamically allocate memory for the matrix.
   - Free all allocated memory after usage to avoid memory leaks.

---

### Example Usage

**Compiling and Running the Program:**
```bash
[sp51@sciprog practical9]$ gcc main.c -o magic_square -lm
[sp51@sciprog practical9]$ ./magic_square
```

**Sample Input File (`magic_square.txt`):**
```
3
2 7 6
9 5 1
4 3 8
```

**Sample Output:**
```
The matrix is a magic square.
```

**Alternate Input File:**
```
3
1 2 3
4 5 6
7 8 9
```

**Alternate Output:**
```
The matrix is NOT a magic square.
```
