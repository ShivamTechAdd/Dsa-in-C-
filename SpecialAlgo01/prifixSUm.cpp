#include<iostream>
#include<vector>
using namespace std;

//prifix sum of sub array.

vector<int> runningSum(vector<int>& nums,int a,int b) {
    //without using extra space.
    int n=nums.size();
    for(int i=a+1;i<=b;i++){
        nums[i]=nums[i-1] + nums[i];
    }
    return nums;
}

int main(){
    int arr[]={5,1,3,10,4,9,6,28,56};  
    int n=sizeof(arr)/sizeof(arr[0]);    
    vector<int> v(arr,arr+n);
    for(int ele:v)  cout<<ele<<" ";
    cout<<endl;

    int a=3;
    int b=8;
    runningSum(v,a,b);
    for(int ele:v) cout<<ele<<" ";
}