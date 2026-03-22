#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//function to find all digits of n;
vector<int> getDigit(int n){
    vector<int> v;   //in this vector me non zero digits ko store ker rahe hai;
    while(n>0){
        if(n%10!=0){ //its is last digit;
            v.push_back(n%10);
        }
        n=n/10;
    }
    return v;
}

//rec solution  

int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    vector<int> d=getDigit(n); //we get all difits of n which are non zero;

    int result=INT_MAX;
    for(int i=0;i<d.size();i++){
        result = min(result,f(n - d[i]));
    }
    return 1+result;
}


//dp sol using top down;
vector<int>dp;
int fTdp(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int> d=getDigit(n); //we get all difits of n which are non zero;

    int result=INT_MAX;
    for(int i=0;i<d.size();i++){
        result = min(result,fTdp(n - d[i]));
    }
    return dp[n] = 1+result;
}

// bottom up
int fBudp(int num){
    dp[0] = 0;
    for(int i = 1; i <= 9; i++) dp[i] = 1; // bas ek step me ho jata hai single digit

    for(int n = 10; n <= num; n++){ // main loop of states
        vector<int> d = getDigit(n); // get all digits of n which are non-zero
        int result = INT_MAX;
        
        for(int i = 0; i < d.size(); i++){
            result = min(result, dp[n - d[i]]); 
        }
        
        dp[n] = 1 + result; 
    }
    return dp[num];
}



int main(){
    int n;
    cout<<"enter a noumber:-";
    cin>>n;
    dp.clear();
    dp.resize(100005,-1); 
    // cout<<f(n)<<endl;
    // cout<<fTdp(n)<<endl;
    cout<<fBudp(n)<<endl;
}
