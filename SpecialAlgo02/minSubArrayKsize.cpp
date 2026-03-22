#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
//brute force approach.
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};  
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;   //window size is 3.
    int maxSum=INT_MIN; 
    int maxIdx=-1;                     //max sum of all the windows
    for(int i=0;i<(n-k);i++){          //for each subarrray traverse over original arr.
        int sum=0;                     //sum of each windows
        for(int j=i;j<(i+k);j++){      //for each 3 size window.
            sum+=arr[j];                //sum of 0th window of size 3.
        }
        // maxSum=max(sum,maxSum);
        if(maxSum<sum){
            maxSum=sum;
            maxIdx=i;
        }

    }
    cout<<maxSum<<endl;
    cout<<"Window starting with "<<maxIdx<<" and ending at "<<maxIdx+k-1<<" gives maxm sum.";
}