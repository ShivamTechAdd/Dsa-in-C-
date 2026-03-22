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

bool SubTreesInRange(Node* root,int lo,int hi,int &count){
    if(!root) return true; //root==NULL;
    //bootom up approach.
    bool leftCall=SubTreesInRange(root->left,lo,hi,count);
    bool rightCall=SubTreesInRange(root->right,lo,hi,count);
    if(leftCall && rightCall && (root->val>=lo && root->val<=hi)){
    count ++;
    return true;
    }
    return false;
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

    int count =0;
    SubTreesInRange(a,5,15,count);
    cout<<count<<endl;
}