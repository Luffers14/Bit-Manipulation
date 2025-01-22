// To find the only set bit

#include <stdio.h>

int findSetBitPosition(int n) {
    if (n <= 0 || (n & (n - 1)) != 0) {
        return -1; 
    }
    int position = 1; 
    while ((n & 1) == 0) { // Shift right until the set bit is found
        n = n >> 1;
        position++;
    }
    return position;
}

int main() {
    int n = 16; // Example: 16 (binary: 10000)
    int position = findSetBitPosition(n);
    if (position != -1)
        printf("The position of the only set bit is: %d\n", position);
    else
        printf("Invalid input: number does not have exactly one set bit.\n");
    return 0;
}
