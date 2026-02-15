    #include<iostream>
    #include <climits>

    using namespace std; 

    void MaxSubSum(int *arr, int n){        //O(n^3)

        int maxSum = INT_MIN;
        for (int i=0; i<n; i++){
            for (int j = i; j<n; j++){
                int counter = 0;
                for (int k = i; k<=j; k++){
                    // cout<<arr[k];
                    counter+=arr[k];
                }
                maxSum = max(maxSum, counter);
                cout<<counter;
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