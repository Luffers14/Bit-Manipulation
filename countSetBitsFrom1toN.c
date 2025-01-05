#include <stdio.h>

// Function to count set bits in an integer
int countSetBits(int n) {
    int ct = 0;
    while (n>0) {
        ct += n & 1; 
        n >>= 1;        // Right shift to process the next bit
    }
    return ct;
}

int main() {
    int n;
    printf("Enter the last integer : ");
    scanf("%d", &n);
 
    for(int i = 1; i <=n; i++) 
    {
      int result = countSetBits(i);
      printf("Number of set bits in %d is: %d\n",i,result);
    }

    return 0;
}
