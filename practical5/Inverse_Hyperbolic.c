#include <stdio.h>
#include <math.h>

#define SIZE 181 // Number of samples from -0.9 to 0.9 with 0.01 increments

double artanh1(double x, double delta) {
    double result1 = 0.0;
    double term;

    for(int n = 0; ; n++){
        term = pow(x, 2*n+1) / (2*n+1);
        if (fabs(term) < delta){
            break;
        }
        result1 += term;
    }
    return result1;
}

double artanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

int main(){

    double delta , x;
    printf("enter value of delta: ");
    scanf("%lf", &delta);

    double results1[SIZE]; 
    double results2[SIZE];

    for (int i = 0; i < SIZE; i++) {
        x = -0.9 + i * 0.01; 
        results1[i] = artanh1(x, delta); 
        results2[i] = artanh2(x); 
    }
    
    printf("\n%-10s %-20s %-20s\n", "x", "artanh1", "artanh2");
// %s indicates there will be a string value 
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%-10.2f %-20.10f %-20.10f\n", -0.9 + i * 0.01, results1[i], results2[i]);
    }

//     %-20.10f:
//          %f is for a floating-point number/value.
//          .10 means it will print 10 digits after the decimal point.
//          -20 means it will take up a space of 20 characters and be left-aligned.

    return 0;
}