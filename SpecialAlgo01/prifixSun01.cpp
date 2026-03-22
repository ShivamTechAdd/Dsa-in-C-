#include<iostream>
#include<vector>
using namespace std;

//prifix sum of sub array.

vector<int> runningSum(vector<int>& nums) {
    //without using extra space.
    int n=nums.size();
    vector<int> prep(n);
    prep[0]=nums[0];
    for(int i=1;i<n;i++){
        prep[i]=prep[i-1] + nums[i];
    }
    return prep;
}

int main(){
    int arr[]={5,1,3,10,4,9,6,28,56};  
    int n=sizeof(arr)/sizeof(arr[0]);    
    vector<int> v(arr,arr+n);
    for(int ele:v)  cout<<ele<<" ";
    cout<<endl;
    vector<int>result=runningSum(v);
    for(int ele:result){
        cout<<ele<<" ";
    }
    
}