// Calculate square of number using bit manipulation

#include <stdio.h>

int square(int n) {
    if (n == 0) 
        return 0;

    // If n is negative, make it positive
    if (n < 0) 
        n = -n;

    // For even numbers
    if ((n & 1) == 0) {
        int half = n >> 1; // Divide by 2
        return square(half) << 2; // Multiply result by 4
    } 
    // For odd numbers
    else {
        return square(n - 1) + (n << 1) - 1;
    }
}

int main() {
    int n;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Square of %d is %d\n", n, square(n));
    return 0;
}
