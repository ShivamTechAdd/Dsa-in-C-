#include<iostream>
#include<string>
#include<vector>
using namespace std;
void arraySubset(int arr[],int n,int idx,vector<int> ans,int k){ //& means every time a new vector is not creating.
    if(idx==n){
      if(ans.size()==k){
        for(int ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
      }
        return;
    }
    if(ans.size()+(n-idx)<k) return;   //time complexity improved.
    int ele=arr[idx];
    arraySubset(arr,n,idx+1,ans,k);
    ans.push_back(ele);
    arraySubset(arr,n,idx+1,ans,k);   //here ans is updated.
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int idx=0;
    int k=3;
    vector<int> v;
    arraySubset(arr,n,idx,v,k);
}  

