#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    //linear search Approach.
    int arr[]={0,1,2,3,4,7,8,9};
    int n=7;
    int x=3;  
   
    //binary search Approach
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid){
            lo=mid+1;
        }
        else{   //arr[mid]!=mid;
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
    

}