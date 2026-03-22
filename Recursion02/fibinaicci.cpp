#include<iostream>
using namespace std;
int fibo(int n){
    //1 1 2 3 5 8 13 21 
    if(n==1||n==2) return 1;
    int fibonaici=fibo(n-1)+fibo(n-2);
    return fibonaici;
}
int main(){
int n;
cout<<" Enter your Nth term:-";
cin>>n;
int result=fibo(n);
cout<<result;
}