#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int perfectSum(vector<int>&arr,int n,int i,int sum){
    if(sum==0) return 1;
    if(i==n || sum<0) return 0;

    //No || yes
    return perfectSum(arr,n,i+1,sum) + perfectSum(arr,n,i+1,sum-arr[i]);
}

int main(){
vector<int>arr={3,4,5,6,9};
int n=arr.size();
int i=0;
int sum=18;
int ans=perfectSum(arr,n,i,sum);
cout<<"found-> "<<ans;
}