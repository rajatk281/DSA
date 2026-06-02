#include <iostream>
#include <vector>
using namespace std;

int lastOccurence(vector<int> v, int n, int i)
{
    if (v[i]==n) return i;
    return lastOccurence(v, n, i-1);
    return -1; 
}

int main()
{
    vector<int> v = {1, 2, 4, 4, 2, 7};
    cout << lastOccurence(v, 4,v.size());
}