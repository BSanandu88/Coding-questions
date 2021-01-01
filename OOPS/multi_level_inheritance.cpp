#include<iostream>
using namespace std;

class A{
    public:
      void Afunc(){
          cout<<"FuncA"<<endl;
      }
};
class B : public A{
    public:
      void Bfunc(){
          cout<<"Func B"<<endl;
      }
};
class C:public B{
    public:
};



int main(){
    C c;
    c.Afunc();
    c.Bfunc();
    return 0;
}