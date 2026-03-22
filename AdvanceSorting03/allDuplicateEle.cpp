#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findDuplicate(int nums[],int len) {
    //using cycle sort.
 vector<int>duplicates(len);
 int i=0;
 while(i<len){
    int correctIdx=nums[i];  //0 based indexing.
    if(nums[correctIdx]==nums[i]){   //we found index of duplicate element
        duplicates.push_back(nums[i]);
    }
    else swap(nums[i],nums[correctIdx]);
 }
 return duplicates;   //means when no missing element found.
}

int main(){
int arr[]={1,3,3,3,4,5,6,7,8,8,9,8,0};
int n=sizeof(arr)/sizeof(arr[0]);

vector<int>res=findDuplicate(arr,n);
for(int ele:res){
    cout<<ele<<" ";
}
cout<<endl;
}