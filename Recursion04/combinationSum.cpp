#include<iostream>
#include<string>
#include<vector>
using namespace std;

void combinationSum(vector<int> v ,int arr[],int n ,int target,int idx){
    if(target==0){
        for(int ele:v){
            cout<<ele<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;

    for(int i=idx;i<n;i++){    //traversing the array and calls.
        v.push_back(arr[i]);
        combinationSum(v,arr,n,target-arr[i],i);
        v.pop_back();   //jab mai ek element bhar raha hun to next call me only one element ja raha hai.
    }
}

int main(){
int arr[]={2,3,5};
int target=8;
vector<int> v;
int n=sizeof(arr)/sizeof(arr[0]);
combinationSum(v,arr,n,target,0);
}


