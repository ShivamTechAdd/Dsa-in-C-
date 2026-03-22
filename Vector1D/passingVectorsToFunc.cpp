#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){  //a-> 200 120 202 123    ->here &a means no new vector is created this will point to passed vector.
    a[0]=100;                  //a->100 120 202 123    //&a make it pass by reference.
    // for(int i=0;i<a.size();i++){
    //     cout<<a.at(i)<<" ";
    // }
    // cout<<endl;
}
int main(){
    vector<int> v; 
    v.push_back(200);
    v.push_back(120);
    v.push_back(202);
    v.push_back(123);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    change(v);            //vectors are pass by value(each time you pass , new vector is created).
    
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}