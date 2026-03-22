#include<iostream>
#include<queue>
#include<unordered_map>
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



//top view algorithm;
void topview(Node*root){
    unordered_map<int,int> m; //<level , value>
    queue< pair<Node* , int> > q; //q can be in pair. //<node,level>
    pair<Node*,int> r;
    r.first=root;
    r.second=0;
    q.push(r);
    while(q.size()>0){ //bfs level order [root left right]
        Node*temp=(q.front()).first;  // node;
        int level=(q.front()).second; //level of node
        q.pop();
        if(m.find(level)==m.end()){ //Not exist//jo level q se nikala hai kya oo mere map me present nahi hai.
        m[level]=temp->val; //insert into map key->val
        }
        if(temp->left!=NULL){
            pair<Node*,int> p;
             p.first=temp->left;
             p.second=level-1; //level dec going to left;
             q.push(p); //  q.push({temp->left,level-1});
        }

        if(temp->right!=NULL){
            pair<Node*,int> p;
             p.first=temp->right;
             p.second=level+1; //level inc going to right;
             q.push(p);
        }
    } //hashmap filled with <level,value>

    //now find max and min level of map 
    int minLevel=INT_MAX;
    int maxLevel=INT_MIN;
    for(auto x:m){ //traverse over map
        int level=x.first;
        minLevel=min(minLevel,level);
        maxLevel=max(maxLevel,level);
    }
    //print top view;
    for(int i=minLevel;i<=maxLevel;i++){
        cout<<m[i]<<" "; //m[i] means m[level]=value;
    }
    cout<<endl;
} 

int main(){
    //construct.
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8}; //INT_MIN=NULL;
    int n=sizeof(arr)/sizeof(arr[0]);
    Node*root=constructTree(arr,n);  //constructing tree using array.
    //level order traversal;
    levelOrderQueue(root);  //to traverse and print the tree.
    cout<<endl;
    topview(root);
}