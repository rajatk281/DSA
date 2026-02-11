#include<iostream>
using namespace std; 

void ChangeVal( int a ){       // Call by value
    a = 20;
}

void ChangeRef(int* ptr){       // Call by reference (using pointer)
    *ptr = 20;
}
void ChangeRefAL(int &d){       // Call by reference (using alias)
    d = 100;
}

int main(){
    int a = 10;
    int b = 30;
    int c = 40;

    ChangeVal(a);              
    cout<<a<<endl;      // 10 ( value is not changed )

    ChangeRef(&b);      // 20 ( value changed )
    cout<<b<<endl;

    ChangeRefAL(c);      // 100 ( value changed )
    cout<<c<<endl;


}