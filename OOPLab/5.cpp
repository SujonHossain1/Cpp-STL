#include <iostream>

using namespace std;

class Complex {
    int real, imag;

public:
    void get_value() {
        cout << "Enter the real and imagine part: ";
        cin >> real >> imag;
        

        cout << "The Complex Number : " << real << " + " << imag << "i" << endl;
    }

    Complex operator+(Complex obj) const  {
        Complex temp{};

        temp.real = obj.real + real;
        temp.imag = obj.imag + imag;

        return temp;
    }
    void display() const  {
        cout << "The Number after Addition: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex obj1{}, obj2{}, obj3{};

    obj1.get_value();
    obj2.get_value();

    obj3 = obj1 + obj2;
    obj3.display();

    return 0;
}