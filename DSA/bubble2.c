#include <stdio.h>
int main()
{
  int a[5] = {7,33,20,11,6}, n = 5, i, j, temp;

  for (i=0; i < n-1; i++) {
    for (j=0 ; j<n-i-1; j++) {
      if (a[j] > a[j+1])  {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp; }
    }
  }

  for (i = 0; i < n; i++)
     printf("%d\n", a[i]);

  return 0;
}