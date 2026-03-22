#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};    
    int n=5;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> visited(n,0);    //0 means not visited. temp is visited array.
    int x=0;
    for(int i=0;i<n;i++){
        int minEle=INT_MAX;
        int minIdx=-1;
        for(int j=0;j<n;j++){
            if(visited[j]==1) continue;
            else{                //visited[j]==0;
                if(minEle>arr[j]){
                     minEle=arr[j];
                     minIdx=j;
                }
            }
        }
        arr[minIdx] = x;
        visited[minIdx]=1;            //already visited.
        x++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}