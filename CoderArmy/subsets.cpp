#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subset(vector<int>arr,int n,int i,vector<vector<int>>&ans,vector<int>temp){
    if(i==n){
        ans.push_back(temp);
        return;
    }
    // no (include)
    subset(arr,n,i+1,ans,temp);
    //yes
    temp.push_back(arr[i]);
    subset(arr,n,i+1,ans,temp);
}

int main(){
vector<int>arr={3,4,5};
int n=arr.size();
int i=0;
vector<vector<int>>ans;
vector<int>temp;
subset(arr,n,i,ans,temp);

//print
for(int i=0;i<ans.size();i++){
   for(int j=0;j<ans[i].size();j++){
    cout<<ans[i][j]<<" ";
   }
   cout<<endl;
}
}