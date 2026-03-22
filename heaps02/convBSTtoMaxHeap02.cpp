#include<iostream>
#include<queue>
using namespace std;
//method 01 observation;
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

//inorder in reverse(sorted) traversal;
void inorder(Node* root,vector<int>& ans){ //only root node.
    if(root==NULL) return;  //base case
    inorder(root->right,ans); //recursion of left part of tree 01
    ans.push_back(root->val);   //work
    inorder(root->left,ans); //recursion of right part of tree 02
}

//preorder traversal of tree canal form amx heap using decreasing array
void preorderMaxHeap(Node* root,vector<int>& ans,int& i){ //only root node.
    if(root==NULL) return;  //base case
    root->val=ans[i++];  //work 
    preorderMaxHeap(root->left,ans,i); //recursion of left part of tree 01
    preorderMaxHeap(root->right,ans,i); //recursion of right part of tree 02
}

//display
//level order traversal using queue (bfs).
void display(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}

int main(){
    //Node created
    Node*a=new Node(10);  //root
    Node*b=new Node(5);
    Node*c=new Node(16);
    Node*d=new Node(1);
    Node*e=new Node(8);
    Node*f=new Node(12);
    Node*g=new Node(20);
    
    //connection of Nodes
    a->left=b;
    a->right=c;
    
    b->left=d;
    b->right=e;
    
    c->left=f;
    c->right=g;
    //tree created.

    display(a);
    vector<int>ans;
    inorder(a,ans); //decr ans vector milege
    int i=0;
    preorderMaxHeap(a,ans,i); //max heap
    display(a);
}
