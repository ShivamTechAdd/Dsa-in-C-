#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;   //not prime means coprime more than two factor.
    }
    return true;                //noumber  is prime;
}
int main(){
    int n;
    cout<<"Enter a noumber:-";
    cin>>n;
    cout<<isPrime(n);
}