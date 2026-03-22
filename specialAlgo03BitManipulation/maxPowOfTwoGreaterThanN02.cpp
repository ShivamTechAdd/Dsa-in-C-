#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
//brian kernigens algorithm.
int pow_Of_Two_smaller_Than_N(int n){    //24   ->n=1 1 1 1 1 =>2^5-1=31 
   n = n | (n>>1);                               // return (n+1)/2 ->(31+1)/2=16
   n = n | (n>>2);
   n = n | (n>>4);
   n = n | (n>>8);                //ones n having all 1s so how many right shift  [n | (n>>x)] happen it will have always all ones in n;
   n = n | (n>>16);                             // max bit 16 n =1 1 1 1 1 1 1 1. ->2^8-1 =255 but we return 2^8-1 =128;
return (n+1)>>1;                                //(n+1)/2 ;
}

int main(){
int n;
cout<<"Enter a noumber:-";
cin>>n;
cout<<pow_Of_Two_smaller_Than_N(n);
}