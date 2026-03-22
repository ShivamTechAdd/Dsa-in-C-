#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
//brian kernigens algorithm.
int count_set_bits02(int n){   //n=22
    int count =0;
    while(n>0){
        n=(n & (n-1));     //n= 22 & 21 ; n=16  n=16 & 15 n= 0 and so on till n>0;
        count++;
    }
    return count;
}
int main(){
int n;
cout<<"Enter a noumber:-";
cin>>n;
cout<<count_set_bits02(n);
}