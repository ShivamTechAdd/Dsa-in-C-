#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //formin ll
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // Node* ptr=&b;
    // (*ptr).val=60;
    // ptr->val=90;
    // cout<<(*ptr).val;

    cout<<a.next->val<<endl;
    a.next->val=90;
    // cout<<b.val<<endl;
    cout<<a.next->val<<endl;
    // cout<<b.next->val<<endl;

    //print d ki value
    //cout<<a.next->next->next->val<<endl;

    //printing whole ll
    Node temp=a;
    while(true){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}