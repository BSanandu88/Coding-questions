#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;


//USING RECURSION

void insertAtBottom(stack<int>&st,int element){
     
     if(st.empty()){
         st.push(element);
         return;
     }
     
     int top_ele = st.top();
     st.pop();
     insertAtBottom(st,element);
     st.push(top_ele);


}

void reverse(stack<int>&st)
{
    if(st.empty()){
        return;
    }

    int element  = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,element);
}

int main(){
    
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    reverse(st);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}