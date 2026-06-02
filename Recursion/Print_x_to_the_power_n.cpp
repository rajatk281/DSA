#include <iostream>
#include <vector>
using namespace std;

int xToThePowerN(int x, int n)          // O( n )
{
    if(n==0) return 1;
    return x*xToThePowerN(x, n-1);
}

int main()
{
   cout<<xToThePowerN(2, 5);
}