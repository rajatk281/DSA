#include<iostream>
#include<vector>
using namespace std; 

int findingSingleNum(vector<int> num){
    int ans = 0; 
    for (int i = 0; i<num.size(); i++){
        ans ^= num[i];
    } 
    return ans; 
}

int main (){
    vector<int> v = {4, 1, 2, 1, 2};
    cout<<findingSingleNum(v);
}