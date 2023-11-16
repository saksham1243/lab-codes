//program to find maximum of n numbers using for loop.
#include <stdio.h>
int main() 
{
  int n, max;
  printf("Enter the number of numbers: ");
  scanf("%d", &n);
  max = n;
  for (int i = 0; i < n; i++) 
  {
    int num;
    printf("Enter the %dth number: ", i + 1);
    scanf("%d", &num);
    if (num > max) 
    {
      max = num;
    }
  }
  printf("The maximum number is %d.\n", max);
  return 0;
}