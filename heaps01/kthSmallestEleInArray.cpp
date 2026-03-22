#include<iostream>
#include<queue>     //stl: standard temporary library.//for heap and pq and maxHeap;
using namespace std;
int main(){
int k=3;
int arr[]={10,20,-4,5,18,24,1,-7,56};
int n=sizeof(arr)/sizeof(arr[0]);
priority_queue<int> pq;   //defoult max heap forms;
for(int i=0;i<n;i++){
    pq.push(arr[i]);
    if(pq.size()>k) pq.pop();
}
int kthSmallest=pq.top();
cout<<kthSmallest<<endl;
}