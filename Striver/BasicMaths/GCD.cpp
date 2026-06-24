#include<iostream>
using namespace std; 

void GCD(int N, int M){
    if (N%M==0){
        cout<< min(N, M);
    }
    
    for (int i=min(N, M); i>=2; i--){
        if (N%i==0 && M%i==0){
            int gcd = i; 
            cout<< gcd;
        }
    }
    return ;
}

int main (){
    GCD(9, 12);
}