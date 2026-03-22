#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
#include<string.h>
#include <climits>
using namespace std;

ll dp[3005][3005];
ll arr[3005];

ll f(int i,int j){
    if(i==j) return arr[i];
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j] = max(arr[i]-f(i+1,j),arr[j]-f(i,j-1));
}

int main(){
    int n;
    cout<<"Enter the n:-";
    cin>>n;
    cout<<"Enter ele of array:-";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    memset(dp,-1,sizeof dp);
    cout<<f(0,n-1);  //idx 0 to n-1 of arr;
    return 0;
}