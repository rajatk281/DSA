#include<iostream>
using namespace std; 

int main () {
    int size; 
    cin>>size; 

    int * arr = new int[size];
    int x = 0; 
    for(int i = 0; i<size; i++){
        arr[i] = x; 
        cout<<arr[i]<<" ";
        x++; 
    }
}