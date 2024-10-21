# Practical 4: Area Under the Curve Using the Trapezoidal Rule

## Overview

In this practical, I extended my previous work by creating additional program blocks that utilize both material from last week’s practical and concepts discussed in this week’s lectures. The primary goal is to calculate the tangent values for angles in degrees and subsequently compute the area under the curve of tan(x)  from 0 to 60 degrees using the Trapezoidal Rule.

## Exercises

### 1. Calculate Tangent Values

- **Objective**: Calculate the values of tan(x) where x is in radians in the range [0, 60] degrees, every five degrees. The results should be stored in a global array and printed.
  
- **Steps**:
  1. Create a global array to hold the tangent values.
  2. Implement a function to convert degrees to radians.
  3. In the `main` function, construct a loop where the loop counter iterates from 0 to 12.
  4. Compute \( \tan(x) \) and store the results in the global array.

### 2. Calculate Area Under the Curve

- **Objective**: Create a function or subroutine that calculates the area under the curve of tan(x) from 0 to 60 degrees using the Trapezoidal Rule.

### 3. Compilation Instructions
 When compiling the C program,I used the following command to ensure that the math library is linked:
  ```bash
  gcc -o file file.c -lm
  ```

## Output

Upon compiling and running the program, the following results were displayed:

```bash
[sp51@sciprog practical4]$ ./file 
Degrees Tan(x)
0	0.000000
5	0.087489
10	0.176327
15	0.267949
20	0.363970
25	0.466308
30	0.577350
35	0.700208
40	0.839100
45	1.000000
50	1.191754
55	1.428148
60	1.732051
Area under the curve of tan(x) from 0 to 60 degrees: 0.695045
[sp51@sciprog practical4]$ 
```
