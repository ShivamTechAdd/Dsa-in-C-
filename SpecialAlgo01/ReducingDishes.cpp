#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSatisfaction(vector<int>& satisfaction) {
    int n=satisfaction.size();
    //01.Sort the array.
    sort(satisfaction.begin(),satisfaction.end());
    //02.sufix array
    int suf[n];
    suf[n-1]=satisfaction[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]+satisfaction[i];
    }
    //find the index 
    int idx=-1;
    for(int i=0;i<n;i++){
        if(suf[i]>=0) {
            idx=i;
            break;
        }
    }
    //when all the sum in suffix array is negative then.
    if(idx==-1) return 0;
    //maximum sum or lifetime quitient. traversing over normal array.
    int x=1;
    int maxSum=0;
    for(int i=idx;i<n;i++){
        maxSum += (satisfaction[idx] * x);
        x++;
    }
    return maxSum;
}

int main(){
    int arr[]={4,3,2,-1,3,-7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cout<< maxSatisfaction(v);
}