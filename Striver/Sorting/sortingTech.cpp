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

void recBubbleSort(int arr[], int n){
    // Base case
    if (n == 1)
        return;
        
    bool isSwap = false;

    // One complete pass
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            isSwap = true;
        }
    }

    // Optimization
    if (!isSwap)
        return;

    // Recursive call for remaining array
    bubbleSort(arr, n - 1);
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

void recInsertionSort(int arr[], int size, int i){
    if (i>=size)  return ;
    
    int prev = i-1; 
    int curr = arr[i];
    while(prev>=0 && arr[prev]>curr){
        arr[prev+1] = arr[prev];
        prev--; 
    }
    arr[prev + 1] = curr;
    recInsertionSort(arr, size, i+1);
}


void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main (){
    int arr[] = {5, 3,2 ,1, 4};
    recInsertionSort(arr, sizeof(arr)/sizeof(int), 1);
    print(arr, sizeof(arr)/sizeof(int));
}