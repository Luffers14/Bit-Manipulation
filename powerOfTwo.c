// Program to find whether a number is power of two 

#include <stdio.h>

int main()
{
  int n,ct = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);
  int temp = n;
  
  while (temp>0)
  {
    ct += temp & 1; 
    temp >>= 1;        // Right shift to process the next bit
  }

  if (n<=0 || ct!=1)    // if the number is negative or zero or has number of count bits other than one it is not a power of two.
  {
    printf("The number is not a power of two.");
  }
  else{
    printf("The number is a power of two");
  }
  
  return 0;
}
