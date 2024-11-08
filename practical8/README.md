# Practical8: Greatest Common Divisor (GCD) using Iterative and Recursive Methods

## Overview
This practical focuses on implementing recursive and iterative functions to compute the Greatest Common Divisor (GCD) of two integers using the Euclidean algorithm. 

## Objectives
- Understand and implement the Euclidean algorithm for finding the GCD.
- Practice writing both iterative and recursive functions in C.
- Gain familiarity with the differences in structure and flow between iterative and recursive solutions.

## Excercise

The main components of the program are:
1. **IterativeGCD(int a, int b)**: Iterative implementation of the Euclidean algorithm.
    - A loop continues until the remainder `b` becomes zero.
    - Each iteration, the values of `a` and `b` are updated, with `a` taking the remainder and `b` the divisor.

2. **RecursiveGCD(int a, int b)**: Recursive implementation of the Euclidean algorithm.
    - If `b` is zero, the function returns `a` as the GCD.
    - Otherwise, it calls itself with the arguments `b` and `a % b`.
3. **main()**: Entry point of the program where user input is taken, and both GCD functions are called to display the results.

### Example Usage

To use the program, compile and run `main.c`:

```bash
[sp51@sciprog practical8]$ gcc main.c -o gcd
[sp51@sciprog practical8]$ ./gcd
```

Sample input/output:

```bash
enter the values for GCD:8 144
the GCD for Iterative the values is 8
the GCD for Recursive the values is 8
[sp51@sciprog practical8]$ 

```