#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
int count_set_bits(int n){
    return __builtin_popcount(n);
}
int main(){
int n;
cout<<"Enter a noumber:-";
cin>>n;
cout<<count_set_bits(n);
}