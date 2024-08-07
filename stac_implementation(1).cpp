#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<" ";
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    // to print elements of stack in rev order of insertion and stack becomes empty
    while(st.size()>0){
     cout<<st.top()<<" ";
     st.pop();
    }
    //stack will not empty
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top();
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    //putting element back from temp to st
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);

    }
    //print stack element not in rev order
   
    while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
     while(temp.size()>0){
        cout<<st.top();
        int x=temp.top();
        temp.pop();
        st.push(x);


    }
}

