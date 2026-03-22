#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

//recursive
vector<int> c; //array of coins;
int f(int x){
    if(x==0) return 0;
    int result=INT_MAX;
    for(int i=0;i<c.size();i++){
        if(x-c[i]<0) continue;   //c[i] is > x; x=11 and we have 20 rs coin; 11-20=-9;
        result=min(result,f(x-c[i]));
    }
    return 1+result;
}

// top down dp;
vector<int>dp; //memoization
int fTdDp(int x){
    if(x==0) return 0;
    if(dp[x]!=-2) return dp[x];
    int result=INT_MAX;
    for(int i=0;i<c.size();i++){
        if(x-c[i]<0) continue;   //c[i] is > x; x=11 and we have 20 rs coin; 11-20=-9;
        result=min(result,fTdDp(x-c[i]));
    }
    if(result==INT_MAX) return dp[x]=INT_MAX;  //result is not updated yet ex:- x=10 ,c[]={6,6}; we never form 10 using these coins;
    return dp[x] = 1+result;
}


int main(){
dp.clear();
dp.resize(100005,-2); //x<=10^6;

int n,x; //x is amount and n is no of coins as array;
cout<<"Enter no of coins:-";
cin>>n;
cout<<"Enter coins :-";
for(int i=0;i<n;i++){
    int num;
    cin>>num;
    c.push_back(num); //input of coins 
}
cout<<"Enter amount :-";
cin>>x;

cout<<"Recursive approach ans :-"<<f(x)<<endl;

cout<<"Top down dp approach ans :-";
int ans=fTdDp(x);
if(ans==INT_MAX) cout<<"-1"<<endl;
else cout<<ans<<endl;

// cout<<fD(x)<<endl;

}