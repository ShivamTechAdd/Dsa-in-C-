#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){ //ye bata raha hai ki start of subArray.
        for(int k=i;k<n;k++){   //k only denotes no of rounds in loop.
            for(int j=i;j<=k;j++){   //subsequence in cont fashion.
                cout<<arr[j];
            }
            cout<<endl;
        }

    }
} 