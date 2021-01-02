#include<iostream>

using namespace std;

//function overloading

class A{
    public:
      void fun(){cout<<"Iam a func with no arguments!!"<<endl;}
      void fun(int x){
          cout<<"func with int argument"<<endl;
      }
      void fun(double x){
          cout<<"func with double argument"<<endl;
      }
};

class Complex{
     private:
         int real,imag;
    public:
         Complex(int r = 0,int i =0){
             real = r;
             imag = i;
         }
    Complex operator + (Complex const &obj){
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display(){
        cout<<real<<" + i"<<imag<<endl;
    }
};

//runtime polymorphisim
class Base {
  public:
      void print(){
          cout<<"this is the base calss"<<endl;
      }
      void display1(){
          cout<<"this is the base class display function!!"<<endl;

      }
};

class Derived : public Base {
    public :
         void print(){
          cout<<"this is the derived calss"<<endl;
      }
      void display1(){
          cout<<"this is the derived class display function!!"<<endl;

      }
};
int main(){

    A obj;
    obj.fun();
    obj.fun(4);
    obj.fun(5.32);
    Complex c1(12,7),c2(6,7);
    Complex c3 = c1 + c2;
    c3.display();
    Base *baseptr;
    Derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr -> display1();
    return 0;
}