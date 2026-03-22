#include<iostream>
#include<vector>
using namespace std;

//prifix sum of sub array.

vector<int> runningSum(vector<int>& nums) {
    //without using extra space.
    int n=nums.size();
    vector<int> sufix(n);
    sufix[n-1]=nums[n-1];
    for(int i=n-2;i>=0;i--){
    sufix[i]=sufix[i+1] + nums[i];
    }
    return sufix;
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