#include<iostream>
#include<queue>
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
//***************************************************************/
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

void levelOrderTraversal(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        printEleOfNthLevel(root,1,i);  //all levels of tree. i=1 2 3 4... each levels. here i means cuurent level than next level.
        cout<<endl;
    }
}

//level order traversal using queue (bfs).
void levelOrderQueue(Node* root){
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

////level order traversal using queue in reverse
void levelOrderQueueRev(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) q.push(temp->right);
        if(temp->left!=NULL) q.push(temp->left);
    }
    cout<<endl;
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
    int level=3;
    int curr=1; //we have to initialise it with 1;
    printEleOfNthLevel(a,curr,level);  //curr=1 ;  here level is given in question
    cout<<endl<<endl;
    levelOrderTraversal(a);
    cout<<endl<<endl;
    levelOrderQueue(a);
    cout<<endl<<endl;
    levelOrderQueueRev(a);
}
