#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};  
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;                          //window size is 3.
    int maxSum=INT_MIN; 
    int maxIdx=0;                     //max sum of all the windows

    //sliding window algo approach.

    //previous sum of window means sum of first k element of array.
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    maxSum=prevSum;          //ho sakta hai ki first window hi max sum return kare.

    //Ab current sum.
    int i=1;
    int j=k;
    while(j<n){
       int currSum=prevSum + arr[j] - arr[i-1];
         if(maxSum<currSum){
            maxSum=currSum;
            maxIdx=i;
        }
        prevSum=currSum;
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx<<endl;
}