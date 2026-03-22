#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(60);
    v.push_back(15);
    v.push_back(14);
    v.push_back(18);
    v.push_back(60);
    v.push_back(19);

    int x=60;
    int idx=-1;
    // for(int i=0;i<v.size();i++){
    //    if (v[i]==x){
    //         idx=i;
    //     }
    // }

    //More optimised 
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
             idx=i;
             break;
        }
    }
    cout<<idx;          //last occurence of x.


}