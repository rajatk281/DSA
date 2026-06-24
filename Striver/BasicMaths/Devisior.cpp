#include<iostream>
#include<vector>
using namespace std; 

vector<int> devisior(int N){
    vector<int> result = {1};
    for (int i=2; i<=N/2; i++){
        if (N%i==0){
            result.push_back(i);
        }
    }
    result.push_back(N);
    return result; 
}

int main(){
    for (int val: devisior(15)){
        cout<<val<<" "; 
    };
}