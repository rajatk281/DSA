#include<iostream>
using namespace std;

void InsertionSort(int arr[], int size){
    for (int i = 1; i<size; i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            swap(arr[prev], arr[prev+1]);
            prev--; 
        }
        arr[prev+1] = current;
    }
}

void display(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main (){
    int arr[5] = {5, 4, 1, 3, 2};
    InsertionSort(arr, 5);
    display(arr, 5);
    return 1;
}