#include<iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    cout<<arr<<endl;        // 0x61fefc (address of first element of the array) : also called constant pointer 
    cout<<*arr<<endl;       // 1 (first element of the array)

    // arr ke address fix hai uski jagah koi aur value nhi assign kr skte hai 

    return 1;
}