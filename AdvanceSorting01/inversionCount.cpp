#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={5,1,3,0,4,9,6};  //total inversions are:-5,1 5,3 5,0 1,0 3,0 9,6 =7
    int n=sizeof(arr)/sizeof(arr[0]);
    int count =0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) count++;
        }
    }
    cout<<"The inversion count is:- "<<count;
}