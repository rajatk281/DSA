#include<iostream>
#include<climits>
using namespace std;

int NunmberOfDigit(int N){
    int count = 0; 
    while(N>0){
        count+=1;
        N=N/10; 
    }
    return count; 
}

int main (){
    cout<<NunmberOfDigit(127);
}