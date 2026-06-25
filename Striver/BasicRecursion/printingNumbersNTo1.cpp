#include<iostream>
using namespace std ;

void printTill(int N){
    if (N==0){
        return ; 
    }
    cout<<N<<" ";
    printTill(N-1);
}
int main(){
    printTill(5);
}