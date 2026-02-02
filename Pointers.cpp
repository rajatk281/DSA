#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n = 10;

    // * -> Dereferencing operator
    // & -> Referencing operator 

    int* ptr = &n; // it will only store address else it will give error

    cout << ptr<<endl;        //0x61ff0c
    cout << &n<<endl;         //0x61ff0c
    cout << &ptr<<endl;       //0x61ff08

    // Pointer to pointer 
    int** ptr2 = &ptr;
    cout << ptr2 << endl;             //0x61ff08

    // Null Pointer
    int *ptr3;
    cout<<ptr3<<endl;          // Returns garbage value (0x61ff54)

    int *ptr4 = NULL;
    cout<<ptr4<<endl;          // Returns no address (0)

    // we can't dereference a null pointer(error: segmentation fault )


    return 0;
}
