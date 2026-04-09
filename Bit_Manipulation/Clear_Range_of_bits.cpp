#include<iostream>
using namespace std;

int clearRangeOfBits(int num, int i, int j){
    while(j>=i){
        int bitMask = num<<j;
        num = num&(~bitMask);
        j--;
    }
    return num;
}

int main (){
    int num = 15;
    cout<<clearRangeOfBits(num, 1, 3);
}