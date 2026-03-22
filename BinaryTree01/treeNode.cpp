#include<iostream>
using namespace std;

class Node{   //tree node.
public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node* root){ //only root node.
    if(root==NULL) return;  //base case
    cout<<root->val<<" ";
    display(root->left); //recursion of left part of tree
    display(root->right); //recursion of right part of tree
}

int main(){
//Node created
Node*a=new Node(1);  //root
Node*b=new Node(2);
Node*c=new Node(3);
Node*d=new Node(4);
Node*e=new Node(5);
Node*f=new Node(6);
Node*g=new Node(7);

//connection of Nodes
a->left=b;
a->right=c;

b->left=d;
b->right=e;

c->left=f;
c->right=g;
 //tree created.
//display
display(a);
}