#include<iostream>
#include<vector>
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
    
     class Queue{    //user defined data structure.
    public:    
        Node* head;
        Node* tail;
        int size;
        Queue(){
          head=tail=NULL;
          size=0;
        }
        void push(int val){
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
    
        void pop(){
            //take care to delete node from memory so that no wastage og space held;
            if(size<=0) {
                cout<<"UnderFlow "<<endl;
                return;
            }
            Node* h=head;
            head=head->next;
            delete(h);  //now older head is permanently deleted from memeory No wastge.
            size--;
        }
        int front(){
            if(size<=0) {
                cout<<"Queue is empty "<<endl;
                return -1;
            }
            else return head->val;
        }

        int back(){
            if(size<=0) {
                cout<<"Queue is empty "<<endl;
                return -1;
            }
            else return tail->val;
        }

        int sizeOfQueue(){
            return size;
        }

        void display(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }

        bool isempty(){
            if(size==0) return true;
            else return false;
        }

     };
    
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.display();
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.pop();
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.sizeOfQueue()<<endl;
    cout<<q.isempty()<<endl;
}