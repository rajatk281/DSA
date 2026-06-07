#include<iostream>
using namespace std; 

int nFriends(int n ){
    if (n==1 || n==2) return n ;
    return nFriends(n-1) + (n-1)*nFriends(n-2);
}

int main (){
    cout<<nFriends(3);
}