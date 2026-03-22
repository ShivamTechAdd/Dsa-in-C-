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

int main(){
    queue<int> q;
    //push
    //pop/
    //front
    //size
    //back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<"\n";
    display(q);
    q.pop();
    display(q);
    displayRev(q);
}