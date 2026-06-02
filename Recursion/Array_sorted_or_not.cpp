#include<iostream>
using namespace std; 

bool is_array_sorted(int arr[], int n, int i){
    if (i == n-1) return true;
    if (arr[i]<arr[i+1]) {
        return is_array_sorted(arr, n, i+1);
    }
    return false; 
}

int main (){
    int arr[] = {1, 2, 3, 4, 5};
    cout<<is_array_sorted(arr, sizeof(arr)/sizeof(arr[0]), 0);
}