#include<iostream>
using namespace std; 

pair<int, int> searchInASortedArray(int arr[][4], int n, int key){
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == key){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main (){
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    pair<int, int> result = searchInASortedArray(arr, 4, 10);

    cout << "Row: " << result.first 
         << ", Col: " << result.second;
}