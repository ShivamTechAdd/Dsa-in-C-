#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subsetSum(vector<int>arr,int n,int i,vector<int>&ans,int &sum){
   if(i==n){
    ans.push_back(sum);
    return;
   }

   //no inclusion
   subsetSum(arr,n,i+1,ans,sum);
   sum+=arr[i];
   //yes inlcude
   subsetSum(arr,n,i+1,ans,sum);
   sum-=arr[i];
}

int main(){
vector<int>arr={3,4,5};
int n=arr.size();
int i=0;
vector<int>ans;
int sum=0;
subsetSum(arr,n,i,ans,sum);

//print
for(int i=0;i<ans.size();i++){
   cout<<ans[i]<<endl;
}
}