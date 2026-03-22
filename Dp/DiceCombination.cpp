#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
# define mod 100000007
using namespace std;
//recursive

int f(int n){
if(n==0) return 1; //do not throw the dice
int totalWay=0;
for(int i=1;i<=6;i++){
    if(n-i < 0) break;   //i is freater than n: ex n=3 and i=4,5,6;
    totalWay =(totalWay % mod + f(n-i) % mod)% mod; //just asked in question.
}
return totalWay % mod;
}

//dp top down;
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

  //Bottom up
  vector<long long> dp1;
  long long fBUdp(int n){
    dp1[0]=1;

    for(int k=1;k<=n;k++){
        long long sum=0;
        for(int i=1;i<=6;i++){
            if(n-i < 0) break;   //i is freater than n: ex n=3 and i=4,5,6;
            sum =(sum % mod + dp1[k-i] % mod)% mod; //just asked in question.
        }
        dp1[k] = sum % mod;
    }
    return dp1[n];
  }  

int main(){
    dp.clear();
    dp.resize(100005,-1);
    int n;
    cout<<"Enter a noumber:-";
    cin>>n;
    // cout<<f(n)<<endl;
    cout<<fTDp(n)<<endl;

    dp1.clear();
    dp1.resize(100006,-1);
    cout<<fBUdp(n)<<endl;

}