#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for (int i = 0; i<size-1; i++){
        for (int j = 0; j<size-i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main (){
    int arr[] = {5, 3,2 ,1, 4};
    bubbleSort(arr, sizeof(arr)/sizeof(int));
    print(arr, sizeof(arr)/sizeof(int));
}