#include<iostream>
#include<limits.h>
#include<algorithm>
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

void minMax(Node*root){
    int mn=root->val,mx=root->val;
    Node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
        mn=temp->val;
    }
    while(root->right!=NULL){
        root=root->right;
        mx=root->val;
    }
    cout<<mn<<" "<<mx;
}

int main(){
    //Node created
    Node*a=new Node(10);  //root
    Node*b=new Node(5);
    Node*c=new Node(20);
    Node*d=new Node(2);
    Node*e=new Node(8);
    Node*f=new Node(15);
    
    //connection of Nodes
    a->left=b;
    a->right=c;
    
    b->left=d;
    b->right=e;
    
    c->left=f;
    c->right=NULL;

    minMax(a);
}