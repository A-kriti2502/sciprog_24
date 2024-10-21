# Practical 5 - User Input and Pointers in C

## Overview

In this practical session, I explored the concepts of **pointers** and **user input** in C. I implemented programs that use pointers to manipulate data and accept input from users during program execution.

## Topics Covered

### 1. **User Input in C**
- I previously explored how to print information to the screen using `printf`. Now, I learnt how to accept user input using `scanf`.
- **Key Points**:
  - The addresses of variables are passed to `scanf` because the function needs to modify the variables.
  - Formatting descriptors, such as `%d` for integers and `%lf` for double, are used for input similarly to `printf`.
  - `scanf` returns the number of values it successfully reads, allowing you to check if the input was successful.

### 2. **Pointers in C**
- Pointers allows to directly access and manipulate memory. In this practical, I used pointers to update values in memory and manipulate variables efficiently.
- **Key Points**:
  - When using pointers, always ensure that the pointer is initialized with the address of a variable.
  - I created functions that accept pointers as parameters and modify the variables they point to.

## Exercises

### 1. Fibonacci Series Using Pointers
- In this exercise, I implemented a function to generate a Fibonacci series. The function uses pointers to modify and update the values of the Fibonacci sequence in place.
- **Explanation**:
  - The program reads an integer n from the user and prints the first n Fibonacci numbers.
  - **next_fibo** function uses pointers to update f0 and f1 to the next numbers in the Fibonacci series.
- **Sample Output**:
    ```bash
        Please enter your desired value of n: 13
        Fibonacci series: 0 1 1 2 3 5 8 13 21 34 55 89 144
    ```

### 2. Approximation of Hyperbolic Tangent
- In this exercise, I computed the inverse hyperbolic tangent (`artanh`) using two methods and compare the results.
- **Explanation**:
  - The artanh1 function uses a series approximation, breaking when the terms are smaller than delta
  - The artanh2 function uses the direct formula for the inverse hyperbolic tangent.
  - The program compares the two methods over a range of values of x.
#### Formula for `artanh1` (Series Expansion):
The first method approximates the inverse hyperbolic tangent (artanh) using the **Taylor series expansion**:
```math
\text{artanh}(x) = \sum_{n=0}^{\infty} \frac{x^{2n+1}}{2n+1}
```



This formula is valid for \( |x| < 1 \). In practical implementation, we sum the terms of the series up to a small error threshold (delta) to control the accuracy of the approximation.

#### Formula for `artanh2` (Logarithmic Identity):
The second method uses the **logarithmic identity** to compute the inverse hyperbolic tangent:
```math
\text{artanh}(x) = \frac{1}{2} \ln\left(\frac{1+x}{1-x}\right)
```


This formula provides an exact result and does not rely on an approximation like the series expansion.

- **Sample Output**:
    ```bash
        Enter value of delta: 0.0001

        x          artanh1              artanh2             
        ------------------------------------------------------------
        -0.90      -1.4718009134        -1.4722194896       
        -0.89      -1.4215502554        -1.4219258711       
        ...
    ```

## Commands

To copy the source file from my local computer to the SciProg VM server, I used the following command:

```bash
scp /Users/aakritiabhaysingh/Desktop/UCD/ICHEC/SciprogGit/practical3/file.c sp51@sciprog.training.ichec.ie:~/practical3/
```

To compile the program, use the following command:

```bash
gcc -o file file.c -lm
```







