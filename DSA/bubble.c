#include <stdio.h>
int main() {
  int a[5] = {7,33,20,11,6};
  int i,j,temp;
  for(i=0; i<5; i++) {
    for(j=i+1; j<5; j++) {
      if(a[i] < a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp; }
    }
  }
  return 0;
}