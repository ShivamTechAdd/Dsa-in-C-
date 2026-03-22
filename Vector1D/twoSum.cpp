#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target:- ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter vector size:-";
    cin>>n;

    cout<<"Enter vector elemnts:-";
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }

    int count=0;
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
                count++;
            }
        }
    }
    cout<<"The no of doublet is:- "<<count;

}