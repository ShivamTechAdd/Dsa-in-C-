#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
# define mod 100000007
using namespace std;

vector<long long>dp;
long long fTDp(int n){
    if(n==0) return 1; //do not throw the dice
    long long totalWay=0;
    if(dp[n]!=-1) return dp[n];
    for(int i=1;i<=6;i++){
        if(n-i < 0) break;   //i is freater than n: ex n=3 and i=4,5,6;
        totalWay =(totalWay % mod + fTDp(n-i) % mod)% mod; //just asked in question.
    }
    return dp[n] = totalWay % mod;
    }

    int main(){
        dp.clear();
        dp.resize(100005,-1);
        int n;
        cout<<"Enter a noumber:-";
        cin>>n;
        cout<<fTDp(n)<<endl;
    }