#include<iostream>
using namespace std; 

bool transpose(int mat[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp; 
        }
    }
    return true;
}

void display (int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<" "<<arr[i][j];
        }
        cout<<endl; 
    }
}

int main (){
    int mat[3][3] = { {1,4,9}, {11,4,3}, {2,2,3} };
    transpose(mat, 3, 3);
    display(mat, 3, 3);
    return 1; 

}