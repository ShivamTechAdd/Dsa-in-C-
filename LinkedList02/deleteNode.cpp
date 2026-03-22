#include<iostream>
using namespace std;
class Node{         //user defined data type.
public:
    int val;
    Node*next;
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
Node* deleteNode(Node* head,Node* target){
    if(head==target){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}

Node* deleteNodeVal(Node* head,int targetVal){
    if(head->val==targetVal){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next->val!=targetVal){
        temp=temp->next;
    }
    temp->next=temp->next->next;
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
    display01(a);
    Node* head01=a;
    display01(head01);
    head01=deleteNode(head01,a); //a is target
    display01(head01);

    Node* head02=a;
    head02=deleteNodeVal(a,30); //a is target
    display01(head02);
}