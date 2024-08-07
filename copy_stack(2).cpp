//copy st stack into gt stack
#include<iostream>
#include<stack>
using namespace std;
stack<int>st;
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
        temp.pop();
        st.push(x);
    }
}
int main(){
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
print(st);
cout<<endl;
stack<int>gt;
stack<int>rt;
while(st.size()>0){
    int x=st.top();
    rt.push(x);
    st.pop();

}
while(rt.size()>0){
    int x=rt.top();
    gt.push(x);
    rt.pop();
}
print(gt); 

}
 