#include<iostream>
 
using namespace std; 

void printSubarrays(int *arr, int n){
    for (int i=0; i<n; i++){
        for (int j = i; j<n; j++){
            // cout<<"("<<arr[i]<<","<<arr[j]<<")";
            for (int k = i; k<=j; k++){
                cout<<arr[k];
            }
            cout<<", ";
        }
        cout<<"\n";
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printSubarrays(arr, 5);
}