#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};    
    int n=5;
    vector<int> temp(n);

    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }
    sort(temp.begin(),temp.end());

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==temp[j]) arr[i]=j;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}