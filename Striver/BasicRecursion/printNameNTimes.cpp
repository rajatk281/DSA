#include<iostream>

using namespace std ;

void printName(string name, int N){
    for (int i=0; i<N; i++){
        cout <<name<<" "; 
    }
}
int main (){
       printName("Rajat", 5);
}