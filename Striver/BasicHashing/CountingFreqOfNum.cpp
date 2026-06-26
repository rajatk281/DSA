#include <iostream>
#include <map>
#include <vector>
using namespace std;

int freq()
{
    // Array initialization 
    int n;
    cout << "Array size: ";
    cin >> n;
    vector<int> v(100);

    // Array with n number of zeroes(hashmap)
    vector<int> hash(20, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        hash[v[i]]++;
    }
    for(int val: hash){
        cout<<val<<" " ;
    }

    // Taking query from the user 
    int q;
    cout << "\nQuery size: ";
    cin >> q;   
    while(q--){
        int num; 
        cin>>num; 
        cout<<num<<"->"<<hash[num]<<endl; 
    }
    return 1;
}
int main()
{
    freq();
}