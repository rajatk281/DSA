#include<iostream>
using namespace std; 

int sumOfFirstNDigits(int N ){
    if (N==0 || N==1){
        return N; 
    }
    return N + sumOfFirstNDigits(N-1);
}

int main (){
    cout<<sumOfFirstNDigits(6);
}