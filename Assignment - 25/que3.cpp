#include <iostream>
using namespace std;

class Factorial {
  public :
 int fact(int num) {
    if(num == 1) return 1;
    num *= fact(num-1);
    return num;
  }
};

int main() {
  Factorial F1;
  cout << F1.fact(5);
  return 0;
}