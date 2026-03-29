#include<iostream>
using namespace std; 
 
// Brute Force Approach ( O(n*m) )
int CountingNum(int arr[][3], int row, int col, int value){
    int count=0;
    for (int i=0; i<row; i++ ){
        for (int j=0; j<col; j++){
            if(arr[i][j]==value){
                count+=1;
            }
        }
    }
    return count; 
}


int main (){
    int arr[2][3] = { {4,7,8}, {8,8,7} };
    cout<<CountingNum(arr, 2, 3, 7);
    
    return 1; 
}