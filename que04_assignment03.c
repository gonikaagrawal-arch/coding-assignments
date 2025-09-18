//Write a C program to demonstrate the use of pre-increment (++x) and post-increment (x++) on a variable. Print the value of the variable before and after each operation.
#include<stdio.h>
int main(){
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    
    printf("Initial value of x: %d\n", x);
    
    // Pre-increment
    printf("Value after pre-increment (++x): %d\n", ++x);
    
    // Post-increment
    printf("Value after post-increment (x++): %d\n", x++);
    
    // Value after post-increment operation
    printf("Value of x after post-increment operation: %d\n", x);
    
    return 0;







}
