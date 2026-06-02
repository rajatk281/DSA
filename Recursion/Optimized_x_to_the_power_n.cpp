#include <iostream>
#include <vector>
using namespace std;

int xToThePowerN(int x, int n)          // O( log n )
{
    if(n==0) return 1;
    int halfPow = xToThePowerN(x, n/2);
    int halfPowSquare = halfPow*halfPow;
    if (n%2 != 0){
        return x*halfPowSquare;
    }
    return halfPowSquare;
}

int main()
{
   cout<<xToThePowerN(2, 5);
}