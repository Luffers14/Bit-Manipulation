// program to count set bits in an integer

#include <stdio.h>

int main()
{
  int n,ct = 0,temp;
  printf("Enter an integer: ");
  scanf("%d", &n);

  temp = n; 
  while (temp>0)
  {
    ct += temp & 1; 
    temp >>= 1;        // Right shift to process the next bit
  }

  
  printf("Number of set bits in %d is: %d\n", n, ct);

  return 0;
}
