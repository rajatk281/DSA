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
};

int main (){
    Complex C1(2, 4);
    Complex C2(3, 7);
    C1.showNum();
    C2.showNum();
}