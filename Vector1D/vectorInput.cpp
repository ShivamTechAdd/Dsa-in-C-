#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> v(5); 
    // cout<<"Enter elements of vector:-";          
    // for(int i=0;i<5;i++){
    //     cin>>v[i];
    // }

    // for(int i=0;i<5;i++){
    //     cout<<v[i]<<" ";
    // }


    //when size is not defined.
    vector<int> v; 
    cout<<"Enter elements of vector:-";          
    for(int i=0;i<5;i++){
      int x;
      cin>>x;
      v.push_back(x);
    }

    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}