// Program to find the two non-repeating elements in an array of repeating elements

#include <stdio.h>

void findTwoUniqueNumbers(int a[], int n)
{
  int xorResult = 0;
  for (int i = 0; i < n; i++)
  {
    xorResult ^= a[i];
  }

  int setBit = xorResult & -xorResult;

  int num1 = 0, num2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] & setBit)
    {
      num1 ^= a[i];
    }
    else
    {
      num2 ^= a[i];
    }
  }

  printf("The two non-repeating elements are: %d and %d\n", num1, num2);
}

int main()
{
  int arr[] = {2, 3, 7, 9, 2, 3, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  findTwoUniqueNumbers(arr, n);
  return 0;
}
