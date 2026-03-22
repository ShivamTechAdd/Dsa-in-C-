#include<iostream>
#include<algorithm>
using namespace std;

int mySqrt(int x) {
    int lo=0;
    int hi=x;
    while(lo<=hi){
        long mid=lo+(hi-lo)/2;
        if(mid*mid==x) return mid;
        else if(mid*mid>x) hi=mid-1;
        else lo=mid+1;
    }
    return hi;   //becouse hi is at lower bound of sqrt.
}
int main(){
long long result=mySqrt(20);
cout<<result;
}