#include<iostream>
#include<math.h>
using namespace std;
int fact=0;
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) {   //not prime means coprime more than two factor.
            fact=i;
            return false;
        }
    }
    return true;                //noumber  is prime;
}
int main(){
    int n;
    cout<<"Enter a noumber:-";
    cin>>n;
    cout<<isPrime(n)<<endl;
    cout<<"If n is not prime then first factor of "<<n<< "is:-" <<fact;
}