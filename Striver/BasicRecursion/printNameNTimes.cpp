#include<iostream>

using namespace std ;

void printName(string name, int N){
    if (N==0){
        return ; 
    }
    cout << name<<" ";
    N--; 
    printName(name, N);
}
int main (){
       printName("Rajat", 3);
}