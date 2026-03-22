#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyQueue
{ // user defined data structure.
public:
    Node *head;
    Node *tail;
    int size;
    DoublyQueue()
    {
        head = tail = NULL;
        size = 0;
    }
    void pushBack(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev=tail;
            tail = temp;
        }
        size++;
    }

    void pushFront(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head->prev=temp;
            head = temp;
        }
        size++;
    }

    void popFront()
    {
        if (size <= 0)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        head = head->next;
       if(head!=NULL) head->prev=NULL; //If(head!=NULL) == if(head) 
       if(head==NULL) tail=NULL;
        size--;
    }

    void popBack()
    {
        if (size <= 0)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else if(size==1){
            popFront();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    int front(){
        if (size <= 0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else return head->val;
    }

    int back(){
        if (size <= 0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else return tail->val;
    }
    
    int s(){
        return size;
    }
    bool isempty(){
        if(size==0) return true;
        else return false;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    DoublyQueue q;
    q.pushFront(10);
    q.pushFront(20);
    q.display();
    q.pushFront(30);
    q.pushFront(40);
    q.display();
    q.pushBack(50);
    q.pushBack(60);
    q.display();
    q.popFront();
    q.display();
    q.popBack();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.s()<<endl;
    cout<<q.isempty()<<endl;
}