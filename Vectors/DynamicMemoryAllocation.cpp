#include<iostream>
using namespace std;

void dyNum(){
    int *ptr = new int; 
    *ptr = 5; 
    cout<<*ptr; 
    delete ptr;
}

void dynArray(){
    int size; 
    cin >> size; 
    int *ptr = new int[size];
    int x = 1; 
    for (int i=0; i<size; i++){
        ptr[i] = x;
        cout<<ptr[i]<<" ";
        x++;
    }
    delete ptr;     // To delete the used heap memory
}

int main (){
    // dynArray();
    dyNum();
    
}