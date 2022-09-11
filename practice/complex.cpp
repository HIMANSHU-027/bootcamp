#include <iostream>
using namespace std;
class Complex {
    private:
      int a,b;
    public:
        Complex() {
            cout << "Hello Objects " << endl;
        }

        void setData(int x,int y) {
            a = x;
            b = y;
        }
    void showData() {
        cout << a << endl << b;
    }

    Complex add(Complex C) {
        Complex tmp;
        tmp.a = a + C.a;
        tmp.b = b + C.b;
        return tmp;
    }
};

int main() {
    Complex C1,C2,C3;
    C1.setData(1,2);
    C2.setData(5,3);
    // C3 = C1+C2;
    // C3=C1.add(C2);
    C3.showData();
    return 0;
}