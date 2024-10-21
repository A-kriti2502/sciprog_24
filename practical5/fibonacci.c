#include <stdio.h>

void next_fibo(int *f0, int *f1) {
    int x = *f1;
    *f1 = *f1 + *f0;
    *f0 = x;
}

int main() {
    
    int n = 0;
    int f0 = 0;
    int f1 = 1;


    printf("Please enter your desired value of n: ");
    scanf("%d", &n);

    printf("\nFibonacci series:\t");

    if (n > 0) {
        printf("%d ", f0);
    }

    
    for (int i = 1; i < n; i++) {
        printf("%d ", f1);  
        next_fibo(&f0, &f1);  
    }

    return 0;
}