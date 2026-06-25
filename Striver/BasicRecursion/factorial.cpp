#include<iostream>
using namespace std ; 

int fact(int N){
    if (N==1){
        return N; 
    }
    return N*fact(N-1);
}

int main (){
    cout << fact(4);
}