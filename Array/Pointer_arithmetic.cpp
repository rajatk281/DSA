#include<iostream>

using namespace std;

int main(){
    int a = 10;


    // Pointer increment/decrement
    
    int* ptr = &a;
    cout<<ptr<<endl;    // 0x61ff08
    ptr++;
    cout<<ptr<<endl;    // 0x61ff0c [pointer address store krta hai and 1 value increment krne se pointer ki value +4 increment ho jayegi as it is type of int]


    // Add subtract numbers with pointers 

    ptr = ptr + 2;            // 2 int => 8 Bytes ki memory add ho jayegi
    cout<<ptr<<endl;        // 0x61ff14

    //// We cannot add two pointers in cpp (ptr1 + ptr2 => Not allowed )

    // But we can subtract two pointers

    // ptr1 - ptr2 => returns no. of integer blocks we cna store in the value we obtained after subtraction 

    int* ptr1 ;
    int * ptr2 = ptr1 + 2;
    cout << ptr2-ptr1<< endl;  // 2


    // Comparision between two pointers 

    cout << (ptr2 < ptr1) << endl;  // 0 => false 


}