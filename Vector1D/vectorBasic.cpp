#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;               //you need not mention the size.
    //inserting / input do not use [] .
    v.push_back(6);
    cout<<v.capacity()<<endl;  // v.size(); gives size
    v.push_back(5);            //push_back checks capacity and then insert.
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(3);            //each time when size is full then capacity is double .
    cout<<v.capacity()<<endl;

    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
}