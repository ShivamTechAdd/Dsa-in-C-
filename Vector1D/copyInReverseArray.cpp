#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
   
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(6);
    v1.push_back(5);

    display(v1);
    //reverse copy in v2
    int n=v1.size();
    vector<int> v2(n);
    for(int i=0;i<n;i++){        //i is for v2.
        //i+j=size-1.
        int j=n-1-i;              //j is for v1.
        v2[i]=v1[j];
    }
    display(v2);
}