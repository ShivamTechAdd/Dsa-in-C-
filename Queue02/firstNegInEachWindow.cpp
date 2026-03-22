#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    queue<int> q;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            q.push(i);   //we push index of neg element of arr.
        }
    }
    for(int i=0;i<(n-k+1);i++){   //outer loop or int i=0; while(i+k < n){}
      while(q.size()>0 && q.front() < i ) q.pop();  //loop for eacj window
        if(q.size()==0 || q.front()>=(i+k)) ans.push_back(0);
        else{    //q.front()<(i+k)
            ans.push_back(arr[q.front()]);
        }
    }
    //print ans;
    for(int ele: ans){
        cout<<ele<<" ";
    }

}