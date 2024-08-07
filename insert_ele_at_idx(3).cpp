//push element at bottom
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    stack<int>temp;
     while(st.size()>0){
        //cout<<st.top()<<" ";
        int x=st.top();
        temp.push(x);
        st.pop();

    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x=temp.top();
        st.push(x);
        temp.pop();
    }
}
    void pushAtBottom(stack<int>& st,int val){
          stack<int>gt;
        while(st.size()>0){
        int x=st.top();
        gt.push(x);
        st.pop();
        }

    st.push(val);
    while(gt.size()>0){
    int x=gt.top();
    st.push(x);
    gt.pop();

    }
}   

     void pushAtIdx(stack<int>& st,int idx,int val){
          stack<int>gt;
        while(st.size()>idx){
        int x=st.top();
        gt.push(x);
        st.pop();


}   st.push(val);
    while(gt.size()>0){
    int x=gt.top();
    st.push(x);
    gt.pop();

    }
}
int main(){
stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
print(st);
cout<<endl;
pushAtBottom(st,80);
print(st);
cout<<endl;
pushAtIdx(st,2,110);
print(st);
}