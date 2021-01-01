#include<iostream>

using namespace std;

class A{
    public:
       int a;
       void funcA(){
           cout<<"Func A"<<endl;
       }

    private:
       int b;
       void funcB(){
           cout<<"Func B"<<endl;
       }

    protected:
       int c;
       void funcC(){
           cout<<"Func C"<<endl;
       }
     
};

int main(){
    A obj;
    obj.funcA();
    return 0;
}