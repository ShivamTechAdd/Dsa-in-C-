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

void display01(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//display recursively

void display02(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    display02(head->next);
}

//display reverse ll

void display03(Node* head){
    if(head==NULL) return;
    display03(head->next);
    cout<<head->val<<" ";
}


int size(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

void insertAtEnd(Node* head,int val){
    Node* temp=new Node(val);
    while(head->next!=NULL){
        head=head->next;  //head is at last node.
    }
    head->next=temp;
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    //cout<<a->val<<endl;
    //cout<<a->next->next->next->val<<endl;

    // Node* temp=a;
    // while (temp!=NULL)
    // {
    //     cout<<temp->val<<" ";
    //     temp=temp->next;
    // }
    display01(a);
    cout<<endl;
    display02(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl<<endl;
    display03(a);
    cout<<endl;
    int val=60;
    insertAtEnd(a,val);
    display02(a);
}