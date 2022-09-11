#include <iostream>
using namespace std;
class Complex {
    private:
      int real,img;
    public:
        void setData(int a,int b) {
            real = a;
            img = b;
        }
    void showData() {
        cout << "Real = " << real << endl;
        cout << "Imaginary = " << img << endl;
    }
};

int main() {
    Complex C1;
    C1.setData(4,5);
    C1.showData();
    return 0;
}