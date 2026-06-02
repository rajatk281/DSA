#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> v, int n, int i)
{
    if (i == v.size())
        return -1;
    if (v[i] == n)
        return i;
    return firstOccurence(v, n, i + 1);
}

int main()
{
    vector<int> v = {1, 2, 4, 4, 2, 7};
    cout << firstOccurence(v, 7, 0);
}