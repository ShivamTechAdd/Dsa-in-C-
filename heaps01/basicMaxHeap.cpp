#include<iostream>
#include<queue>     //stl: standard temporary library.//for heap and pq and maxHeap;
using namespace std;
int main(){
priority_queue<int> pq;   //defoult max heap forms;

pq.push(2);
pq.push(-6);
pq.push(10);
pq.push(81);
cout<<pq.top()<<endl;
pq.pop();
cout<<pq.top()<<endl;
priority_queue<int,vector<int>,greater<int> > mp; //min heap;
mp.push(2);
mp.push(-6);
mp.push(10);
cout<<mp.top()<<endl;

}