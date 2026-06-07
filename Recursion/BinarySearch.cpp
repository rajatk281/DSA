#include<iostream>
#include<vector>

using namespace std; 

void binarySearch(vector<int> v, int k, int mid){
    if (v[mid]==k) {
        cout<<mid; 
        return ; 
    }
    else if (k<v[mid]){
        return binarySearch(v, k, mid/2);
    }
    else if(k>v[mid]){
        return binarySearch(v, k, (mid+v.size())/2);
    }
    else{
        cout << "Element not found ";
    }
}

int main (){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    binarySearch(v, 6, v.size()/2);
}