#include<iostream>
#include<string>
using namespace std; 

void findAllOccurrences(int arr[], int key , string ans, int i, int size){
    if(i==size) {
        cout<<ans; 
        return ; 
    } 
    else if (arr[i] == key) {
        ans+=to_string(i);
    }
    return findAllOccurrences(arr, key, ans, i+1, size);
}

int main (){
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int size = sizeof(arr)/sizeof(int);
    findAllOccurrences(arr, 2, "", 0, size);
    return 1;
}

