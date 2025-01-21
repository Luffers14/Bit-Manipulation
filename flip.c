// To count the number of bits to be flipped to convert integer

#include <stdio.h>

#include <stdio.h>

int countBitFlips(int A, int B)
{
  int XOR = A ^ B;
  int count = 0;

  while (XOR > 0)
  {
    count += XOR & 1;
    XOR >>= 1;
  }
  return count;
}

int main()
{
  int a , b;
  printf("Enter two integers : ");
  scanf("%d %d", &a, &b);
  printf("Number of bits to flip: %d\n", countBitFlips(a, b));
  return 0;
}
