#include<iostream>
#include<stack>
using namespace std;
stack<int>st;
void print(stack<int>st){
    stack<int>temp;
    while(st.size()>0){
        //cout<<st.top();
        int x=st.top();
        temp.push(x);
        st.pop();
 }
 while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    } 
    void pushAtBottom(stack<int> & st, int val){
        stack<int>helper;
        while(st.size()>0){
        helper.push(st.top());
        st.pop();
        }
        st.push(val);
        while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
      //  cout<<st.top();
        }
}
    int main(){
        stack<int>st;
        int val;
        st.push(2);
        st.push(2);
        st.push(2);
        st.push(4);
        print(st);
        cout<<endl;
        pushAtBottom(st,8);
        print(st);
        
    }



        





