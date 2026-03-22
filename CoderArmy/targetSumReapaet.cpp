#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int repeatedPerfectSum(vector<int>&arr,int n,int i,int sum){
    if(sum==0) return 1;
    if(i==n || sum<0) return 0;

    //No || yes
    return repeatedPerfectSum(arr,n,i+1,sum) + repeatedPerfectSum(arr,n,i,sum-arr[i]);
}

int main(){
vector<int>arr={2,3,4};
int n=arr.size();
int i=0;
int sum=6;
int ans=repeatedPerfectSum(arr,n,i,sum);
cout<<"found-> "<<ans;
}