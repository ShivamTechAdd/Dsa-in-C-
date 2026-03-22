#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void display1(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display1(arr,n,idx+1);
}


void display2(vector<int> &v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display2(v,idx+1);
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    display1(arr,n,0);   //0 is index.
    cout<<endl;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display2(v,0);

}