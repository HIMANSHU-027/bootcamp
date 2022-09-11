#include <iostream>
using namespace std;

class LargestNumber {
  public :
  int maxInThree(int num1, int num2, int num3) {
    int max;
     max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
     return max;
  }
};

int main() {
  LargestNumber L1;
  cout << "Largest Number is : "<< L1.maxInThree(12,27,9);
  return 0;
}