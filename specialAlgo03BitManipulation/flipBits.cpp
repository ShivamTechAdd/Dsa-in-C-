#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
//brian kernigens algorithm.
int flip_All_Bits(int n){    
    int temp=n;
    n = n | (n>>1);                               
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);                              //ones n having all 1s so how many right shift  [n | (n>>x)] happen it will have always all ones in n;
    n = n | (n>>16);                             // max bit 16 n =1 1 1 1 1 1 1 1. ->2^8-1 =255 but we return 2^8-1 =128;
    //till here we made all ones in n;
    temp=temp ^ n;
    return temp;
}

int main(){
int n;
cout<<"Enter a noumber:-";
cin>>n;
cout<<flip_All_Bits(n);
}