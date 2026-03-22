#include<iostream>
#include<queue>
#include<limits.h>
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

void leftView(Node* root,int &maxLevel,int currLevel,vector<int> &ans){
    if(root==NULL) return;
    if(currLevel>maxLevel){
        maxLevel=currLevel;
        ans.push_back(root->val);
    }
    leftView(root->left,maxLevel,currLevel+1,ans);
    leftView(root->right,maxLevel,currLevel+1,ans);
}

int main(){
    //Node created
    Node*a=new Node(1);  //root
    Node*b=new Node(7);
    Node*c=new Node(9);
    Node*d=new Node(6);
    Node*e=new Node(0);
    Node*f=new Node(8);
    Node*g=new Node(7);
    Node*h=new Node(13);
    Node*i=new Node(5);
    
    //connection of Nodes
    a->left=b;
    a->right=c;
    
    b->right=d;
    
    c->right=e;

    d->left=f;
    d->right=g;

    e->left=h;

    h->right=i;
    
     //tree created.
     vector<int> ans;
     int maxLevel=-1;
     int currlevel=0;
     leftView(a,maxLevel,currlevel,ans);  //a is root
     //print ans;
     for(int ele:ans){
        cout<<ele<<" ";
     }
}