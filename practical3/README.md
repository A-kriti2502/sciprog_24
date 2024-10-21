# Practical 3: Area Under the Curve Using the Trapezoidal Rule

## Overview
In this practical, I calculate the area under the curve of the function using the **Trapezoidal Rule**. The goal is to approximate the integral of tan(x) from x = 0 to x = 𝜋/3 and compare the result with the exact solution:

$$
\int_0^{\frac{\pi}{3}} \tan(x) \, dx = \log(2)
$$


## Program Description

The program utilizes a loop in C to compute the sum necessary for the Trapezoidal Rule and then derives the approximate integral. It evaluates the function at equidistant points between x = 0 to x = 𝜋/3, sums these values, and applies the trapezoidal approximation formula:

$$
\[
\text{Integral} \approx \frac{b - a}{2N} \left( f(x_0) + 2 \sum_{i=1}^{N-1} f(x_i) + f(x_N) \right)
\]
$$

### Explanation of Key Steps

1. **Initial Setup:**
   - Define \( a = 0 \) (lower limit) and \( b = 𝜋/3 \) (upper limit) for the bounds of integration.
   - Set \( N = 12 \) to divide the interval into 12 equidistant points, enhancing the approximation's accuracy.

2. **Trapezoidal Rule Application:**
   - Calculate \( tan(a) \) and \( tan(b) \), which are the values at the endpoints of the interval.
   - Iterate through the remaining points using a loop, calculating \( tan(p) \) and adding these values to the sum, multiplied by 2 as specified by the trapezoidal rule formula.

3. **Final Computation:**
   - After completing the loop, adjust the sum by multiplying it with \( (b - a) / 2N \) to obtain the area under the curve.
   - Compute the **exact value** of the integral using \( log(2) \) and compare it with the approximation by calculating both the **absolute difference** and the **relative difference**.

### Output

Upon compiling and running the program, the following results were displayed:

```bash
aakritiabhaysingh@AAKRITIs-MacBook-Pro practical3 % gcc file.c -o file 
The value of the sum before the loop is: 1.732051
The value of the sum after the loop is: 15.929256
The final value of the sum is: 0.695045
The exact value is: 0.693147
Absolute difference = 0.001898
Relative difference = 0.002738
```

- The program computes an approximate value of **0.695045** for the integral, while the exact value is **0.693147**.
- The **absolute difference** between these values is **0.001898**.
- The **relative difference** is **0.002738**, indicating a small error and demonstrating that the Trapezoidal Rule provides a very close approximation to the exact result.

## Commands

To copy the source file from my local computer to the SciProg VM server, I used the following command:

```bash
scp /Users/aakritiabhaysingh/Desktop/UCD/ICHEC/SciprogGit/practical3/file.c sp51@sciprog.training.ichec.ie:~/practical3/
```

To compile the program, use the following command:

```bash
gcc -o file file.c -lm
```
