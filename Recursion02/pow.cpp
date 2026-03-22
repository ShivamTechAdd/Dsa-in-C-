#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0) return 1;
    else if(n==1) return x;
     //return x*power(x,n-1);       //traditional method.
    else if(n%2!=0){                //when n is odd. 
    int result=power(x,n/2);
    return x*result*result;
     } 
     else{  
     int result=power(x,n/2);         //mentos jindgi. when n is even.
     return result*result;
    }
}

int main(){
int a;
cout<<" Enter your a term:-";
cin>>a;
int b;
cout<<" Enter your b term:-";
cin>>b;
int result=power(a,b);
cout<<result;
}

