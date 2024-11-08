#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Iterative GCD function 
int IterativeGCD( int a , int b){
    int temp = 0 ;
    while (b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Recursive GCD function 
int RecursiveGCD( int a , int b){
    if ( b == 0 ){
        return a;
    } 
    return RecursiveGCD(b, a%b);
}
int main(){
    int a , b, ans = 0;
    printf("enter the values for GCD:");
    scanf("%d %d", &a, &b);
    // Using the iterative method
    ans = IterativeGCD(a, b);
    printf("the GCD for Iterative the values is %d\n", ans );
    // Using the recursive method
    ans = RecursiveGCD(a,b);
    printf("the GCD for Recursive the values is %d\n", ans );
    
    return 0;
}