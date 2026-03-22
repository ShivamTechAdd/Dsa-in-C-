#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool targetSum(vector<int>&arr,int n,int i,int target){
    if(target==0) return true;
    if(i==n || target<0) return false;

    //No || yes
    return targetSum(arr,n,i+1,target) || targetSum(arr,n,i+1,target-arr[i]);
}

int main(){
vector<int>arr={3,4,5,6,9};
int n=arr.size();
int i=0;
int sum=0;
int target=18;
bool ans=targetSum(arr,n,i,target);
cout<<"found-> "<<ans;
}