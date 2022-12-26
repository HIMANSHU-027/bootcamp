#include <iostream>
using namespace std;
int main() {
  int arr[4] = {2,5,9,6};
  int len = sizeof(arr)/sizeof(arr[0]);
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < len; j++) {
      if(i < arr[j] )
      cout << "*";
      else cout << " ";
    }
    cout << "\n";
  }
  return 0;
}