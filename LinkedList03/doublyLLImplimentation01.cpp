#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
    };

    void display01(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void displayRec(Node* head){
        Node* temp=head;
        if(temp==NULL) return;
        cout<<temp->val<<" ";
        displayRec(temp->next);
    }
    //recursively.
    void displayRev(Node* head){
        if(head==NULL) return;
        displayRev(head->next);
        cout<<head->val<<" ";
    }
    void displayRevIterative(Node* tail){
        while(tail!=NULL){
            cout<<tail->val<<" ";
            tail=tail->prev;
        }
    }

int main(){
    //10 20 30 40 50
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);

    a->next=b;
    a->prev=NULL;

    b->next=c;
    b->prev=a;

    c->next=d;
    c->prev=b;

    d->next=e;
    d->prev=c;

    e->next=NULL;
    e->prev=d;

    display01(a);
    cout<<endl;
    displayRec(a);
    cout<<endl;
    displayRev(a);
    cout<<endl;
    displayRevIterative(e);
}
