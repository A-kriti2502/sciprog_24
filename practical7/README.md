# Practical 7 - Dynamic Memory Allocation and Pointers in C

## Overview
In this practical, I delved into dynamically allocated arrays and pointer manipulation in C. The exercises demonstrate how to allocate memory for arrays, fill them with data, and release the memory once done. Additionally, I explored using series approximations to estimate the value of the mathematical constant e .

## Exercises

### 1. Estimating the Value of \( e \)
Using a series expansion, we approximate \( e \) by setting \( x = 1 \) in the formula:

\[ f(x) = 1 + x + (x^2)/(2! + (x^3)(3!) + (x^4)(4!) + ...

The user inputs the order of the polynomial (up to 15) to determine the level of approximation. The program dynamically allocates an array to store each term, calculates the sum, and compares the result against the true value of \( e \) (approximately 2.71828).

**Observation**:
With higher-order polynomials (beyond a certain point), the estimate may diverge from the true value due to floating-point precision limitations and the growing complexity of factorial calculations.

**Example Output**:
```
Enter the value of n: 4
The calculated value is: 2.708
The actual value is: 2.71828
The difference is: -0.010
```

### 2. Basic C Pointers and Dynamic Memory Allocation
In this exercise, I practiced dynamic memory allocation and pointer manipulation. The tasks are as follows:

1. **`allocatearray()` Function**:  
   This function takes an integer as an argument and returns a pointer to a dynamically allocated memory block for that many integers.

2. **`fillwithones()` Function**:  
   This function takes a pointer to an integer array and fills each element with the value `1`. The size of the array is also passed as an argument to the function.

3. **`printarray()` Function**:  
   This function takes a pointer to an integer array and prints each element to the screen.

4. **`freearray()` Function**:  
   This function takes a pointer to an integer array and frees the allocated memory.

5. **Execution in the Main Block**:  
   The main function calls each of these functions to demonstrate the process of memory allocation, data manipulation, and cleanup. Users can enter different array sizes to see the effect of the program.

**Example Output**:
```
Enter the size of the integer array to allocate and fill with ones: 2
Printing the array:
1
1
```

---

## Compilation and Execution
To compile and run the program:
1. **Compile** the program using:
   ```bash
   gcc -o practical7 main.c -lm
   ```
2. **Run** the program:
   ```bash
   ./main
   ```
