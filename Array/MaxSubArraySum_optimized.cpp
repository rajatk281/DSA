#include<iostream>
#include <climits>

using namespace std; 

void MaxSubSum(int *arr, int n){        // O(n^2)

    int maxSum = INT_MIN;
    for (int i=0; i<n; i++){
        int sum = 0;
        for (int j = i; j<n; j++){
            sum+=arr[j];
            maxSum = max(maxSum, sum);
            cout<<sum;
            cout<<", ";
        }
        cout<<"\n";
    }
    cout<<maxSum;
}

int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    MaxSubSum(arr, 6);
}