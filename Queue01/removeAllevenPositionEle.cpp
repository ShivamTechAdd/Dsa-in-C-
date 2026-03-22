#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void removeEvenPositinEle01(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0)  q.pop();
        else{
            int x=q.front();
            q.push(x);
            q.pop();
        }
    }
}

void removeEvenPositinEle02(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2!=0){
            int x=q.front();
            q.push(x);
        }
        q.pop();
    }
}

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

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    removeEvenPositinEle01(q);
    display(q);

    q.push(70);
    q.push(80);
    q.push(90);
    display(q);
    removeEvenPositinEle02(q);
    display(q);
}