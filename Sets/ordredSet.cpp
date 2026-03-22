#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(10);
    s.insert(4);
    s.insert(8);
    s.insert(3);
    //All are orderd O(log(n)) sorted
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl<<endl;
    //map
    map<int,int>m;
    m[2]=20;
    m[1]=30;
    m[3]=10;
    //All are orderd O(log(n)) sorting done based on key;
    for(auto ele:m){ //pair->auto
        cout<<ele.first<<"->"<<ele.second<<" ";
    }
}