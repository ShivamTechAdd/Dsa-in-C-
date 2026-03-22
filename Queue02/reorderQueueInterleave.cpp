#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        q.push(x);
        q.pop();
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    //pushing elemnet in the queue
    for(int i=1;i<=8;i++){
        q.push(i);
    }
    display(q);
    int n=q.size();
    stack<int> st;
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    display(q);
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    display(q);
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    display(q);
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    display(q);
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    display(q);
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //Now my queue is reorderd.
    display(q);
}
