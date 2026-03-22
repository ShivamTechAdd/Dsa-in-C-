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

 class LinkedList{    //user defined data structure.
public:    
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
      head=tail=NULL;
      size=0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0){
             head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0){
             head=tail=temp;
        }
        else{
           temp->next=head;
           head=temp;
        }
        size++;
    }

    
    void insertAt(int idx,int val){
        Node* temp = new Node(val);
        if(idx<0 || idx>size){
            cout<<"Invalid index"<<endl;
            return;
        }
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        
        else{
            Node* t=new Node(val);
            Node*temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
       
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>=size) {
            cout<<"Invalid index"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;
        }
        return temp->val;
        }
    }

    void deleteAtHead(){
        if(size<=0) {
            cout<<"List is empty"<<endl;
            return;
        }
        head=head->next;
        size--;
    }

    void deleteAtTail(){
        if(size<=0) {
            cout<<"List is empty"<<endl;
            return;
        }
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }

    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size) {
            cout<<"Invalid index"<<endl;
            return ;
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
        Node*temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
        }
    };


    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
LinkedList ll;   // { }   //it is data structure.
ll.insertAtEnd(10);  //{ 10->NULL }
ll.insertAtEnd(20);  //{ 10->20->NULL }
ll.insertAtEnd(30);  //{ 10->20->30->NULL}
ll.display();
cout<<ll.size<<endl;
ll.insertAtHead(1);
ll.insertAtHead(2);
ll.insertAtHead(3);
ll.display();
cout<<ll.size<<endl;
int idx=2;
ll.insertAt(idx,88);
idx=3;
ll.insertAt(idx,89);
ll.display();
cout<<ll.size<<endl;

cout<<ll.getAtIdx(3)<<endl<<endl;

ll.deleteAtHead();
ll.display();
cout<<ll.size<<endl;

ll.deleteAtTail();
ll.display();
cout<<ll.size<<endl;

int idx1=3;
ll.deleteAtIdx(idx1);
ll.display();
cout<<ll.size<<endl;

}