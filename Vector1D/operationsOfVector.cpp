#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;             
 
    v.push_back(6);
    v.push_back(5);            //push_back checks capacity and then insert.
    v.push_back(4);
    v.push_back(10);
    v.push_back(6);
    v.push_back(5);            //push_back checks capacity and then insert.
    v.push_back(4);
    v.push_back(10);            //each time when size is full then capacity is double .

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    v.pop_back();          //pop_back() does not affect our capacity ,can only affect our size.
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
 
}