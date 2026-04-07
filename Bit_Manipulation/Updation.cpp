#include<iostream>
using namespace std; 

void updateIthBit(int num, int pos, int val){
    num = num & ~(1<<pos);
    num = num | (val<<pos);
    cout<<num;
}

int main (){
    updateIthBit(7, 2, 0);
}