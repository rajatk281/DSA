#include<iostream>
using namespace std ;

void printTill(int N){
    if (N==0){
        return ; 
    }
    printTill(N-1);
    cout<<N<<" ";
}
int main(){
    printTill(5);
}