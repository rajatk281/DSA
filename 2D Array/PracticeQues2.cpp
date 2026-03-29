#include<iostream>
using namespace std;    

int secondRowSum(int arr[][3], int row, int col){
    int sum = 0; 
    for (int i = 0; i<col; i++){
        sum+=arr[1][i];
    }
    return sum ;
}

int main(){
    int mat[3][3] = { {1,4,9}, {11,4,3}, {2,2,3} };
    cout<<secondRowSum(mat, 3, 3);
    return 1; 
}
