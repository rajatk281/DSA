#include<iostream>
#include<vector>
#include<cmath>
using namespace std; 

long long power(int base, int exponent){
    long long result = 1;
    while(exponent--){
        result *= base;
    }
    return result;
}

int NthRootOfM(int N, int M){
    int low=1; 
    int high=M;
    while(low<=high){
        int mid = low+(high-low)/2; 
        if (M==(power(mid,N))){
            return mid;
        }else if (power(mid,N)<M){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1; 
}

int main (){
    cout<<NthRootOfM(3, 27);
}