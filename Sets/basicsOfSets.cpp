#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(5);  //duplicates are discarded;
    s.erase(2);
    int target=4;
    //s.find() -> 1) it searches in the set and if it is not found then it returnsthe last element;
    if(s.find(target)!=s.end()){ //target exist
        cout<<"Exists"<<endl;
    }
    else cout<<"Does Not Exists"<<endl;
    
    cout<<s.size()<<endl;
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;
    //or
    for(auto ele:s){
        cout<<ele<<" ";
    }

}