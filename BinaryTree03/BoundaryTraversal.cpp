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
//constructing tree using array.
Node* constructTree(int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;   //arr[i]==INT_MIN;

        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;   //arr[j]==INT_MIN;

        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}

/********************************/
//print level order in left to right.
int levels(Node* root){
    if(root==NULL) return 0;
    int level=1+max(levels(root->left),levels(root->right));
    return level;
}

//print element of nth level. 
//preorder traversal or dfs;
void printEleOfNthLevel(Node* root,int curr,int level){ //level is given like n=3; left to right.
    if(root==NULL) return;  //base case
    if(curr==level){   //work
        cout<<root->val<<" ";
        return;   //control goes to there from where it has been called.
    }
    printEleOfNthLevel(root->left,curr+1,level); //recursion of left part of tree 01
    printEleOfNthLevel(root->right,curr+1,level); //recursion of right part of tree 02
}
//priting tree in level order.
void levelOrderTraversal(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        printEleOfNthLevel(root,1,i);  //all levels of tree. i=1 2 3 4... each levels. here i means cuurent level than next level.
        cout<<endl;
    }
}



//Left Boundary traversal;
void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return; //leaf node; then do not print just return becouse we only have to print left boundary.
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}
//Leaf node traversal
void bottomBoundary(Node*root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";  //leaf node ko print kero
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

//right boundary(reverse order)
void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return; //leaf node; then do not print just return becouse we only have to print left boundary.
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";   //becouse print reverse right boundary.
}

void boundary(Node* root){
    cout<<"The boundary traversal is:-"<<endl;
    leftBoundary(root);
    // cout<<endl;
    bottomBoundary(root);
    // cout<<endl;
    rightBoundary(root->right);  //becouse root is printed once.
}

int main(){
    //construct.
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN}; //INT_MIN=NULL;
    int n=sizeof(arr)/sizeof(arr[0]);
    Node*root=constructTree(arr,n);  //constructing tree using array.
    levelOrderTraversal(root);
    cout<<endl;

    //Boundary traversal;
    boundary(root);
}
