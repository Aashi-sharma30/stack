#include<iostream>
#include<vector>;
using namespace std;
class stack{
    public:
    vector<int>v;
    stack(){ //constructor
      
    }
    void push(int val){
        v.push_back(val);
       }  
    void pop(){
        if(v.size()==0){      
        cout<<"stack is empty"<<endl;
        }
        v.pop_back();
    }
    int top(){
         if(v.size()==0){
        cout<<"stack is empty"<<endl;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.size()<<" "<<endl;
    st.pop();
    cout<<st.top();
}