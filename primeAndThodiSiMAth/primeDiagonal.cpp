#include<iostream>
#include<vector>
#include<math.h>
#include<limits.h>
using namespace std;
//leet code 2614

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) {   //not prime means coprime more than two factor.
            return false;
        }
    }
    return true;                //noumber  is prime;
}

int diagonalPrime(vector<vector<int>>& nums){
int mx=0;
int n=nums.size();
for(int i=0;i<n;i++){
    if(isPrime(nums[i][i])){   //upper diagonal
        mx=max(mx,nums[i][i]);
    }
    if(isPrime(nums[i][n-i-1])){   //lower diagonal
        mx=max(mx,nums[i][n-i-1]);
    }
}
return mx;
}
int main(){
vector<vector<int>> v={{1,2,3,4},{3,4,5,6},{7,8,9,5}};
cout<<diagonalPrime(v);
}
