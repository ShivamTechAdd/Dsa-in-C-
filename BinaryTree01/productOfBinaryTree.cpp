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
void display(Node* root){ //only root node.
    if(root==NULL) return;  //base case
    cout<<root->val<<" ";
    display(root->left); //recursion of left part of tree  (left recursion).1st call 
    display(root->right); //recursion of right part of tree  (right recursion).2nd call
}
int sumOfAllNodes(Node* root){
    if(root==NULL) return 0;
    int leftSum=sumOfAllNodes(root->left);
    int rightSum=sumOfAllNodes(root->right);
    // return  root->val + sumOfAllNodes(root->left) + sumOfAllNodes(root->right);
    int res= root->val + leftSum + rightSum;
    return res;
}
int productOfAllNodes(Node* root){
    if(root==NULL) return 1;
    int leftPro=sumOfAllNodes(root->left);
    int rightPro=sumOfAllNodes(root->right);
    // return  root->val * sumOfAllNodes(root->left) * sumOfAllNodes(root->right);
    int res= root->val * leftPro * rightPro;
    return res;
}

int size(Node* root){
    if(root==NULL) return 0;
    int count = 1 + size(root->left) +  size(root->right);
    return count;
}

int Max(Node* root){
    if(root==NULL) return INT_MIN;
    int mx = max(root->val ,max(Max(root->left) , Max(root->right)));
    return mx;
}

int Min(Node* root){
    if(root==NULL) return INT_MAX;
    int mn = min(root->val ,min(Min(root->left) , Min(root->right)));
    return mn;
}

int levels(Node* root){
    if(root==NULL) return 0;
    int level=1+max(levels(root->left),levels(root->right));
    return level;
}

int height(Node* root){
    return levels(root)-1;
}

int main(){
//Node created
Node*a=new Node(5);  //root
Node*b=new Node(-4);
Node*c=new Node(30);
Node*d=new Node(6);
Node*e=new Node(2);
Node*f=new Node(1);

//connection of Nodes
a->left=b;
a->right=c;

b->left=d;
b->right=e;

c->left=f;
c->right=NULL;
 //tree created.
//display
display(a);
cout<<endl;

int sum = sumOfAllNodes(a);
cout<<sum<<endl;
cout<<size(a)<<endl;
cout<<Max(a)<<endl;
cout<<Min(a)<<endl;
cout<<levels(a)<<endl;
cout<<height(a)<<endl;
cout<<productOfAllNodes(a)<<endl;
}