#include<iostream>
#include<string>
using namespace std;

class FrontendDev{
    public:
        void Frontend(){
            cout<<"should know HTML CSS and JS \n";
        }
};

class BackendDev{
    public:
        void Backend(){
            cout << "Should know database and Auth \n";
        }
};

class FullstackDev : public FrontendDev, public BackendDev{
    public:
        void Fullstack(){
            cout<<"Should know system design \n";
        }
};

int main (){
    FullstackDev F1;
    F1.Backend();
    F1.Frontend();
    F1.Fullstack();
}