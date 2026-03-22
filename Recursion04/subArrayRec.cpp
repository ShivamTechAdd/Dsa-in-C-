#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subArray(vector<int> v,int arr[],int n,int idx){
    if(idx==n){
        for(int ele:v){
            cout<<ele<<" ";
        }
        cout<<endl;
        return;
    }

    int ele=arr[idx];
    subArray(v,arr,n,idx+1);
    if(v.size()==0 || v[v.size()-1]==arr[idx-1]){
    v.push_back(ele);
    subArray(v,arr,n,idx+1);
    }
    
    // else{
    //     if(v[v.size()-1]==arr[idx-1]){  //vector ka last elemnt aur arr idx-1 th element ager same hai to call legegi nahi to return;
    //         v.push_back(ele);
    //         subArray(v,arr,n,idx+1);
    //     }
    // }
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int idx=0;
    subArray(v,arr,n,idx);



}