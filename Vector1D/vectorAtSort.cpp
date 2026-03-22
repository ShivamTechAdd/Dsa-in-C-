#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; 
    v.push_back(200);
    v.push_back(120);
    v.push_back(202);
    v.push_back(123);

    // v.at(2)=90;
    // cout<<v.at(2)<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    //sort
   //sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}
