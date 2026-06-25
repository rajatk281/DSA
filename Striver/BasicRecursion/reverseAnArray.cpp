#include<iostream>
using namespace std ;

void reverse(int arr[], int size, int i, int j){
    if (i>=j){
        return ; 
    }
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp; 
    return reverse(arr, size, i+1, j-1);
}

int main (){
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, (sizeof(arr)/sizeof(int)), 0, (sizeof(arr)/sizeof(int))-1);
    for (int i=0; i <(sizeof(arr)/sizeof(int)); i++){
        cout<<arr[i]<< ", "; 
    }
}