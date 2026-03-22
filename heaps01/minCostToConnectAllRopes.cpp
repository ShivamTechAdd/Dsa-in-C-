#include<iostream>
#include<queue>     //stl: standard temporary library.//for heap and pq and maxHeap;
using namespace std;
int main(){
    int arr[]={2,7,4,1,8};
    priority_queue<int,vector<int>,greater<int> > pq; //min heap;
    for(int ele: arr) pq.push(ele);
    //traverse over pq
    int cost=0;
    while(pq.size()>1){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        cost+=(x+y);
        pq.push(x+y);
    }
    if(pq.size()==1)
    cout<<"The length of rope is:-"<<pq.top()<<" The min cost is:-"<<cost<<endl;
}