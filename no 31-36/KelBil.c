#include <stdio.h>

int lcm(int a, int b)
{
    int m = 1;

    while(m%a || m%b) m++;

    return m;
}

void main()
{
  int arr[] = {2,3};
  int result, size, i;

  size = sizeof(arr) / sizeof(int);
  result = arr[0];

  for (i = 1; i < size; i++)
  {
  	int m = 1;

    while(m%a || m%b) m++;
    result = lcm(result, arr[i]);
  }

  printf("The LCM of the array is %d.\n", result);
}
