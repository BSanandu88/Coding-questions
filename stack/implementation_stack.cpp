//array based implementation

#include<iostream>
#include<stack>
using namespace std;
#define n 100

class Stack{
    int* arr;
    int top;

    public:
     Stack(){
         arr = new int[n];
         top = -1;
     }

     void push(int x){
         if(top == n - 1){
             cout << "stack overflow!!";
             return;
         }

         top++;
         arr[top] = x;
     }

     void pop(){
         if(top == -1){
             cout << "NO element to pop";
             return;
         }
         top--;
     }

    int Top(){
        if(top == -1){
             cout << "NO element ";
             return -1;
         }
        return arr[top];
    }

    bool empty(){
        return top == -1;
    }
};

int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.Top() <<endl;
    return 0;
}