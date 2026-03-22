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

    //sliding window algo approach without using extra space as curr sum.

    //previous sum of window means sum of first k element of array.
    int Sum=0;
    for(int i=0;i<k;i++){
        Sum+=arr[i];
    }
    maxSum=Sum;          //ho sakta hai ki first window hi max sum return kare.

    //Ab current sum.
    int i=1;
    int j=k;
    while(j<n){
         Sum=Sum + arr[j] - arr[i-1];
         if(maxSum<Sum){
            maxSum=Sum;
            maxIdx=i;
        }
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx<<endl;
}