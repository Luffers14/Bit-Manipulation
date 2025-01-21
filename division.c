// Divide two integers using bit manipulation

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int divide(int dividend, int divisor) {
    if (divisor == 0) {
        printf("Division by zero error\n");
        return INT_MAX;
    }

   
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    // Convert to positive values
    long long absDividend = labs(dividend);
    long long absDivisor = labs(divisor);

    long long quotient = 0;

    while (absDividend >= absDivisor) {
        long long tempDivisor = absDivisor, multiple = 1;
        while (absDividend >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            multiple <<= 1;
        }
        absDividend -= tempDivisor;
        quotient += multiple;
    }

    quotient = sign * quotient;
    return (quotient > INT_MAX || quotient < INT_MIN) ? INT_MAX : quotient;
}

int main() {
    int dividend , divisor ;
    printf("Enter the dividend : ");
    scanf("%d",&dividend);

    printf("Enter the divisor : ");
    scanf("%d",&divisor);

    printf("Quotient: %d\n", divide(dividend, divisor));
    return 0;
}
