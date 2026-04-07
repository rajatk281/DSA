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

int setIthbit(int num, int pos){
    int bitMask = 1<<pos; 
    return (num|bitMask);
}

int clearIthBit(int num, int pos){
    int bitMask = ~(1<<pos);
    return (num&bitMask);
}

bool isPowerOfTwo2(int num){
    return (num&(num-1));
}

int main (){
    // cout<<getIthBit(7, 1)<<endl;

    // cout<<setIthbit(6, 3);

    // cout<<clearIthBit(6, 1);

    cout<<isPowerOfTwo2(8);

}