#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

Node*createBt(){
int x;
cin>>x;
if(x==-1) return NULL;
Node*temp=new Node(x);
//left side create
cout<<"Enter the left child of "<<x<<" :";
temp->left=createBt();
//right side create
cout<<"Enter the right child of "<<x<<" :";
temp->right=createBt();
return temp;
}

int main(){
    cout<<"Enter the root Node: ";
    Node*root;
    root=createBt();
}