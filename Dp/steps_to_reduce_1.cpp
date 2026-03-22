#include<iostream>
#include<vector>
#define inf INT_MAX
#include<limits.h>
using namespace std;

//recursive;
int frec(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return 1 + min( frec(n-1) , min( (n%2==0) ? frec(n/2) : inf , (n%3==0) ? frec(n/3) : inf ) ); //or min(a,b,c)=min(a,min(b,c));
}

vector<int>dp;
//using dp top down approach
int fTdp(int n){  //int i also used;
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    
    if(dp[n]!=-1) return dp[n]; //nth state pre computed;
    //if(dp[n]==-1) we need to compute first this state;
    return dp[n]= 1 + min( fTdp(n-1) , min( (n%2==0) ? fTdp(n/2) : inf , (n%3==0) ? fTdp(n/3) : inf ) ); 
}

//Bottom up ya tabulation
vector<int> dp1;
int fBUdp(int n){
    dp1.clear();
    dp1.resize(n+1,-1);
    dp1[1]=0;
    dp1[2]=1;
    dp1[3]=1;
    for(int i=4;i<=n;i++){
        dp1[i]=1+min(dp1[i-1], min( (i%2) == 0 ? dp1[i/2] : inf , (i%3) == 0 ? dp1[i/3] : inf ));
    }
    return dp1[n];
}

int main(){ //n->1000 max
    int n1;
    cout<<"Enter the no:-";
    cin>>n1;
    dp.clear();
    dp.resize(1005,-1);
    cout<<fTdp(n1)<<endl;

    //bototom up

    int n2;
    cout<<"Enter the no:-";
    cin>>n2;
    cout<<fBUdp(n2)<<endl;

}