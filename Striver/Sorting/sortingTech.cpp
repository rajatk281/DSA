#include<iostream>
using namespace std;

// We actually compare each and bubble with it's successor ans swap the values.
// Time complexity : O(n^2)
void bubbleSort(int arr[], int size){
    bool isSwap = false; 
    for (int i = 0; i<size-1; i++){
        for (int j = 0; j<size-i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap=true; 
            }
        }
    }
    // Optimization 
    if (!isSwap){
        return; 
    }
}

// We select sorted and unsorted part of an array and compare for the smallest idx element wrt to the ith element in each iteration .
// Time complexity : O(n^2)
void selectionSort(int arr[], int size){
    for (int i=0; i<size-1; i++){
        int smallestIdx = i; 
        for (int j=i+1; j<size; j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j; 
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}


// Based on placing card games, we insert the each element in its correct position.
// Time complexity : O(n^2)
void insertionSort(int arr[], int size){
    for (int i=1; i<size; i++){
        int curr = arr[i];
        int prev = i-1; 
        while (prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        swap(arr[prev+1], curr);
    }
}


void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main (){
    int arr[] = {5, 3,2 ,1, 4};
    insertionSort(arr, sizeof(arr)/sizeof(int));
    print(arr, sizeof(arr)/sizeof(int));
}