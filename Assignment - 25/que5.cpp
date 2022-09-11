#include <iostream>
using namespace std;

class ReverseNumber {
  public :
  int reverse(int num) {
    int rev;
      while(num != 0) {
        rev = rev * 10 + num%10; 
        num = num/10;
      }
     return rev;
  }
};

int main() {
  ReverseNumber R1;
  cout << R1.reverse(58579);
  return 0;
}