// Power set using bit manipulation

#include <stdio.h>
#include <math.h>

void printPowerSet(int set[], int n)
{
  int powerSetSize = pow(2, n);

  printf("Power Set:\n");
  for (int i = 0; i < powerSetSize; i++)
  {
    printf("{ ");
    for (int j = 0; j < n; j++)
    {
      
      if (i & (1 << j))
      {
        printf("%d ", set[j]);
      }
    }
    printf("}\n");
  }
}

int main()
{
  int a[10], n;
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  printf("Enter the elements : ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }
  

  printPowerSet(a, n);
  return 0;
}
