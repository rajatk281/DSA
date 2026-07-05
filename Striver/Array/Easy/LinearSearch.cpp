#include<iostream>
#include<vector>
using namespace std; 

int linearSearch(vector<int> arr, int k){
    for (int i =0; i<arr.size(); i++){
        if (arr[i]==k){
            return i; 
        }
    }
    return -1; 
}

int main (){
    vector<int> arr = {2,3 , 4, 3, 28 };
    cout<<linearSearch(arr, 28);
}
