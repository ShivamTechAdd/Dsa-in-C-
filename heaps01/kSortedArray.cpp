#include<iostream>
#include<queue>     //stl: standard temporary library.//for heap and pq and maxHeap;
using namespace std;
int main(){
int k=3;
int arr[]={6,5,3,2,8,10,9};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int> ans;
priority_queue<int,vector<int>,greater<int> > pq; //min heap;
for(int i=0;i<n;i++){
    pq.push(arr[i]);
    if(pq.size()>k){
        int ele=pq.top();
        pq.pop();
        ans.push_back(ele);
    }
}
while(pq.size()>0){
    ans.push_back(pq.top());
    pq.pop();
}
//print the ans vector
for(int ele: ans){
    cout<<ele<<" ";
  }
}