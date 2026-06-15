#include <iostream>
using namespace std;

void firstPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void secondPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void thirdPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " " << j + 1 << " ";
        }
        cout << endl;
    }
}
void fourthPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " " << i + 1 << " ";
        }
        cout << endl;
    }
}
void fifthPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j >= i; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void sixthPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j >= i; j--)
        {
            cout << " " << N - j << " ";
        }
        cout << endl;
    }
}
void seventhPattern(int N)
{

    for (int i = 0; i < N; i++)
    {
        for (int k = N - (i + 1); k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j < (i + 1) * 2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void eigththPattern(int N)
{

    for (int i = 0; i < N; i++)
    {
        for (int j = (N - i); j < N; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < ((N * 2) - (2 * i)); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void ninthPattern(int N)
{

    for (int i = 0; i < N; i++)
    {
        for (int k = N - (i + 1); k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j < (i + 1) * 2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = (N - i); j < N; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < ((N * 2) - (2 * i)); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void tenthPattern(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= N - 1; i++)
    {
        for (int j = N - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void eleventhPattern(int N)
{
    int arr[2] = {0, 1};
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}
void twelthPattern(int N)
{
    for (int i = 1; i <= N; i++)
    {
        int temp = i;
        int temp2 = i;
        for (int j = 1; j <= N; j++)
        {
            if (temp > 0)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
            temp--;
        }
        for (int k = N; k > 0; k--)
        {
            if (k > temp2)
            {
                cout << " ";
            }
            else
            {
                cout << k;
            }
        }
        cout << endl;
    }
}
void thirteenthPattern(int N)
{
    int num = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j > 0; j--)
        {
            num = num + 1;
            cout << num << " ";
        }
        cout << endl;
    }
}
void fourteenthPattern(int N)
{
    for (int i = 1; i <= N; i++)
    {
        char ch = 'A';
        for (int j = i; j > 0; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void fifteenthPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        char ch = 'A';
        for (int j = N - i; j > 0; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void sixteenthPattern(int N)
{
    char ch = 'A';
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}
void seventeenthPattern(int N)
{
    for (int i = 1; i <= N; i++)
    {
        char ch = 'A';
        for (int k = N - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j=1 ; j<2*i; j++){
            if(j<=i){
                cout<<ch; 
                if(j<i){
                    ch++;
                }
            }else{
                ch--; 
                cout<<ch;
            }
        }
        cout<<endl; 
    }
}
void eigtheenthPattern(int N){
    for (int i=1; i<=N; i++){
        char ch='E';
        for (int j = i; j>0; j--){
            char lt=ch-(j-1);
            cout<<lt<<" "; 
        }
        cout<<endl ; 
    }
}
void nineteenthPattern(int N){
    for (int i=1; i<=2*N; i++){
        for (int j=1; j<=2*N; j++){
            if(i<=N){
                if(j<=N-(i-1) || j>N+(i-1) ){
                    cout<< "*";
                } else {
                    cout<< " ";
                }
            }else {
                if(j<=i-N || j>2*N-(i-N)){
                    cout<<"*";
                }else {
                    cout<< " ";
                }
            }
        }
        cout<<endl;
    }
}
void twentiethPattern(int N){
    for (int i=1; i<=2*N; i++){
        for (int j=1; j<=2*N; j++){
            if(i<=N){
                if(j<=i|| j>2*N-i ){
                    cout<< "*";
                } else {
                    cout<< " ";
                }
            }else {
                if(j<=2*N-i || j>i){
                    cout<<"*";
                }else {
                    cout<< " ";
                }
            }
        }
        cout<<endl;
    }
}
void twentyFirstPattern(int N){
    for (int i=1; i<=N; i++){
        for (int j=1; j<=N; j++){
            if (i==1 || i==N){
                cout<< "*";
            }else {
                if(j==1 || j==N){
                    cout<<"*";
                }else{
                    cout<< " ";
                }
            }
        }
        cout<<endl; 
    }
}

int main()
{
    twentyFirstPattern(5);
}