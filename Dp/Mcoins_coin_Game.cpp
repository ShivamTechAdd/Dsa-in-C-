#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
# define mod 100000007
using namespace std;

//dp top down;
vector<int>dp;
bool f(int n,int k,int l){
    if(n==1 || n==k || n==l) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = !(f(n-1,k,l) && f(n-k,k,l) && f(n-l,k,l));
}


int main(){
// int n, k,l,m; //k,l no of coins we pick and m is total no of times game played;
// cout<<"Enter n k l m:-";
// cin>>n>>k>>l>>m;
// dp.clear();
// dp.resize(n+10,-1);
// cout<<f(n,k,l);

// cout<<endl<<endl<<"Bottom up started"<<endl;

int n,k,l,m;
cout<<"Enter n,k,l,m:-";
cin>>n>>k>>l>>m;

//bottom up computaion
vector<bool>dp1(100005,0);
dp1[1]=1;
dp1[k]=1;
dp1[l]=1;
for(int i=2;i<=100005;i++){
    if(i==k or i==l) continue;

    dp[i]=!(dp[i-1] && ((i-k >=1)?dp[i-k]:1) && ((i-l >=1)?dp[i-l]:1));
}
for(int i=0;i<m;i++){
    int n;
    cin>>n;
    if(dp[n]==1){
        //n is winning state
        cout<<"A";
    }
    else{
        //n is loosing state
        cout<<"B";
    }
}

}