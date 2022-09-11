#include <iostream>
using namespace std; 

class Square {
  public : 
  int sq(int num) {
    return num*num;
  }
};

int main() {
  Square S1;
  cout << S1.sq(10);
  return 0;
}