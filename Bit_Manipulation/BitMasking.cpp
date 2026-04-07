#include <iostream>
using namespace std ;

void oddOrEven(int num){
    if(num&1==1){
        cout<<"odd"<<endl;
    } else{
        cout<<"even"<<endl;
    }
}

int main(){
    oddOrEven(10);
    oddOrEven(11);
}