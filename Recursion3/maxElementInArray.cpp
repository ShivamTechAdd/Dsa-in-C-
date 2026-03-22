#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

void printMax1(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max<<" ";
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    printMax1(arr,n,idx+1,max);
}

int maxInArray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int idx=0;
    int max=INT_MIN;
    printMax1(arr,n,idx,max);
    cout<<endl;

    cout<<maxInArray(arr,n,idx);

}