#include<iostream>
using namespace std; 

class Complex {
    int real ;
    int imag ;
    public: 
        Complex(int r, int i){
            real = r; 
            imag = i; 
        }
        void showNum(){
            cout<<real<<" + "<<imag<<"i\n";
        }

        // Operator Overloading
        Complex operator + (Complex &c2){
            int resReal = this->real + c2.real;
            int resimag = this->imag + c2.imag;
            Complex C3(resReal, resimag);
            return C3;
        }
};

int main (){
    Complex C1(2, 4);
    Complex C2(3, 7);
    C1.showNum();
    C2.showNum();
    Complex C3 = C1 + C2;
    C3.showNum();
}