#include<iostream>
using namespace std; 

int getIthBit(int num, int pos){
    int bitMask = 1<<pos;
    // cout<<bitMask<<endl;
    if(bitMask&num){
        return 1;
    }else {
        return 0;
    }
}

int main (){
    cout<<getIthBit(7, 1)<<endl;
    cout<<getIthBit(6, 2)<<endl;
    cout<<getIthBit(7, 5)<<endl;
}