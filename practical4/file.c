#include <stdio.h>
#include <math.h>

//initialized global array
float tan_values[13];
//function for converting degree to radians 
float degrees_to_radians(float degrees) {
    return degrees * (M_PI / 180.0);
}
// Function to calculate the area under the curve of tan(x) from 0 to 60 degrees using the Trapezoidal Rule
float trapezoidalAre(float a, float b, int N) {
    float h = (b - a) / N; 
    float sum = tan(a) + tan(b); 

    for (int i = 1; i < N; i++) {
        float x = a + i * h; 
        sum += 2 * tan(x); 
    }

    return (h / 2) * sum; 
}


int main(void) {
    // Loop for tan values for angles from [0 , 60] degrees
    for (int i = 0; i <= 12; i++) {
        float degrees = i * 5; 
        float radians = degrees_to_radians(degrees); 
        tan_values[i] = tan(radians); 
    }

    printf("Degrees Tan(x)\n");
    for (int i = 0; i <= 12; i++) {
        printf("%d\t%.6f\n", i * 5, tan_values[i]);
    }

    // Calculating the area under the curve of tan(x) 
    float area = trapezoidalAre(0, degrees_to_radians(60), 12);
    printf("Area under the curve of tan(x) from 0 to 60 degrees: %.6f\n", area);

    return 0;
}
