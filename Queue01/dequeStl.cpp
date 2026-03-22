#include<iostream>
#include<deque>
using namespace std;
//wrong.
void display(deque<int>& dq){
    int n=dq.size();
    for(int i=0;i<n;i++){
        int x=dq.front();
        cout<<x<<" ";
        dq.push_front(x);
        dq.pop_back();
    }
    cout<<endl;
}

int main(){
    deque<int> dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);
    display(dq);
    dq.push_back(50);
    dq.push_back(89);
    display(dq);
    dq.pop_front();
    display(dq);
    dq.pop_back();
    display(dq);
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.size()<<endl;
    
}
