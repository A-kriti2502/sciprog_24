# Practical 6 - Matrix Multiplication and Makefile Usage

## Overview

This practical focuses on using the `make` utility to manage the compilation of a multi-file C program. The exercise involves creating and multiplying matrices, splitting the code across different files, and organizing the build process with a Makefile.

## Topics Covered

### 1. **Matrix Multiplication in C**
- Implemented matrix multiplication for matrices C[n][q]  = A[n][p] B[p][q].
- Set matrix dimensions: n = 5 , p = 3 , and q = 4.
- Initialized matrices:
  - **A** with values based on the sum of indices: A[i][j] = i + j
  - **B** with values based on the difference of indices: B[i][j] = i - j
- Performed matrix multiplication to compute the elements of matrix **C**, initialized to zero before calculations.
- Displayed matrices **A**, **B**, and **C** to confirm correct output.

### 2. **Splitting Code into Multiple Files**
- Organized code into separate files for better modularity and reusability:
  - Created a `main.c` file to handle initialization and printing.
  - Developed a `math_mult.c` file containing the `mathmult` function for matrix multiplication.

### 3. **Using Makefile for Compilation**
- Constructed a Makefile to streamline the build process.
- Configured Makefile to compile `main.c` and `math_mult.c`, linking them into an executable named `mmc`.
- Used optimization flags for efficient code execution.

## Commands

After creating the Makefile, the following commands were used to compile and run the program:

```bash
[sp51@sciprog ~]$ cd practical6
[sp51@sciprog practical6]$ make
[sp51@sciprog practical6]$ ./mmc
```

## Sample Output

Upon running the executable, the output displayed the matrices:

```bash
[sp51@sciprog ~]$ cd practical6
[sp51@sciprog practical6]$ ls
main.c  Makefile  math_mult.c
[sp51@sciprog practical6]$ make
gcc   -c -O3 main.c
gcc   -c -O
gcc   -o mmc main.o math_mult.o -lm
[sp51@sciprog practical6]$ ls
main.c  main.o  Makefile  math_mult.c  math_mult.o  mmc
[sp51@sciprog practical6]$ ./mmc

The A matrix is:
  0.00   1.00   2.00 
  1.00   2.00   3.00 
  2.00   3.00   4.00 
  3.00   4.00   5.00 
  4.00   5.00   6.00 

The B matrix is:
  0.00  -1.00  -2.00  -3.00 
  1.00   0.00  -1.00  -2.00 
  2.00   1.00   0.00  -1.00 

The C matrix is:
  5.00   2.00  -1.00  -4.00 
  8.00   2.00  -4.00 -10.00 
 11.00   2.00  -7.00 -16.00 
 14.00   2.00 -10.00 -22.00 
 17.00   2.00 -13.00 -28.00 
[sp51@sciprog practical6]$ 

```

The practical demonstrated the effectiveness of dividing code into multiple files and using `make` for efficient compilation, particularly in managing complex projects with multiple source files.