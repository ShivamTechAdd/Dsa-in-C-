#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue <int> &q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.push(x);
        q.pop();
    }
    cout<<endl;
}

void displayRev(queue <int> &q){
    int n=q.size();
    stack<int> st;
   // storing in stack and push from rear end in queue.
    for(int i=0;i<n;i++){
        int x=q.front();
        st.push(x);
        q.push(x);
        q.pop();
    }
    //print from stack in rev order
    while(st.size()>0){
        int x=st.top();
        cout<<x<<" ";
        st.pop();
    }
    cout<<endl;
}

void RevFirstKElem(queue <int> &q,int k){
    int n=q.size();
    stack<int> st;
   // storing in stack and push from rear end in queue.
    for(int i=0;i<k;i++){
        int x=q.front();
        st.push(x);
        q.pop();
    }
    //print from stack in rev order
    while(st.size()>0){
        int x=st.top();
        q.push(x);
        st.pop();
    }

    for(int i=0;i<(n-k);i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
}


int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    RevFirstKElem(q,3);
    display(q);
}