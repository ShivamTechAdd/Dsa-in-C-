#include<iostream>
#include<queue>
#include<map>
#include<vector>
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



//bottom view algorithm;
void botoomView(Node*root){
    map<int,int> m; //<level , value> ordered map
    queue< pair<Node* , int> > q; //q can be in pair. //<node,level>
    q.push({root,0});
    while(q.size()>0){ //bfs level order [root left right]
        Node*temp=(q.front()).first;  // node;
        int level=(q.front()).second; //level of node
        q.pop();
        if(m.find(level)==m.end()){ //Not exist//jo level q se nikala hai kya oo mere map me present nahi hai.
        m[level]=temp->val; //insert into map key->val
        }
        if(temp->left!=NULL){
           q.push({temp->left,level-1}); 
        }

        if(temp->right!=NULL){
          q.push({temp->right,level+1});
        }
    } //hashmap filled with <level,value>

    vector<int> ans;
    for(auto x:m){ //traverse over map
        ans.push_back(x.second); //x.second or value;
    }
    //print bottom view and vector having bottom view;
    for(auto ele: ans){
        cout<<ele<<" "; 
    }
    cout<<endl;
} 

int main(){
    //construct.
    // int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8}; //INT_MIN=NULL;
    int arr[]={1,2,4,6,7,INT_MIN,INT_MIN,INT_MIN,INT_MIN,5,3,INT_MIN,INT_MIN,INT_MIN,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node*root=constructTree(arr,n);  //constructing tree using array.
    //level order traversal;
    levelOrderQueue(root);  //to traverse and print the tree.
    cout<<endl;
    botoomView(root);
}