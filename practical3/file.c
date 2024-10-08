#include <stdio.h>
#include <math.h>

int main(void)
{
    int N = 12;  
    float a = 0;  
    float b = M_PI / 3;  
    
    float sum = tan(a) + tan(b);  
    printf("The value of the sum before the loop is: %f\n", sum);

    float h = (b - a) / N;  // (60 - 0) / 12 = 5
    
    for (int i = 1; i < N; i++) 
    {
        float p = a + i * h;  
        sum += 2 * tan(p);
    }

    printf("The value of the sum after the loop is: %f\n", sum);
    
    sum = ((b - a) / (2 * N)) * sum;
    printf("The final value of the sum is: %f\n", sum);
    

    float exact_value = logf(2);
    printf("The exact value is: %f\n", exact_value);
    

    float abs_diff = fabs(sum - exact_value);
    float rel_diff = fabs(1 - (sum / exact_value));
    
    printf("Absolute difference = %f\n", abs_diff);
    printf("Relative difference = %f\n", rel_diff);
    
    return 0;
}