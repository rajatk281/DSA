#include<iostream>
using namespace std; 

int nsum(int n ){
    if (n==1) return 1; 
    return n+nsum(n-1);
}

int main (){
    cout<<nsum(2);
}