#include <iostream>
#include <vector>
#include<set>
// #include <algorithm>
using namespace std;

void Union(vector<int> arr1, vector<int> arr2)
{
    set<int> st; 
    for (int val: arr1){
        st.insert(val);
    }
    for (int val: arr2){
        st.insert(val);
    }
    for (int val: st){
        cout<< val<< " ";
    }
}
int main(){
    vector <int> arr1 = {1,2,3,4,5};
    vector <int> arr2 = {2,3,4,4,5};
    Union(arr1, arr2);

}
