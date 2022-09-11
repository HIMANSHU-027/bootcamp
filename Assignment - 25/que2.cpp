#include <iostream>
using namespace std;
class Time {
   int hr, min, sec;
   public :
   void setTime(int h, int m, int s) {
    hr = h;
    min = m;
    sec = s;
   }

   void showTime() {
    cout << "Time : " << hr <<" hr " << min <<" min " << sec << " sec ";
   }
};

int main() {
  Time T1;
  T1.setTime(3,45,20);
  T1.showTime();
  return 0;
}