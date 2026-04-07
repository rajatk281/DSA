#include<iostream>
using namespace std; 

void lastBitZeroTill (int num, int i ){
    int bitMask = -1<<i;
    cout<<(num&bitMask);
}

int main (){
    lastBitZeroTill(15, 2);
    return 0;
}