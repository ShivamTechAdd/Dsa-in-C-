#include<iostream>
#include<vector>
#include<math.h>
#include<limits.h>
using namespace std;
//tc=O(sqrt(n));
// void printFactor(int n){
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0) cout<<i<<" "<<n/i<<" ";

//     }
// }



// void printFactor(int n){
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0){
//         cout<<i<<" ";
//         if(i!=sqrt(n)) cout<<n/i<<" ";
//         }
//     }
// }



//tc(sqrt(n));   //printig in increasing order.
void printFactor(int n){
    for(int i=1;i<sqrt(n);i++){  //sqrt se pahle vale.
        if(n%i==0) cout<<i<<" ";
    }

    for(int i=sqrt(n);i>=1;i--){   //sqrt se bad vale.
        if(n%i==0)  cout<<n/i<<" ";         
    }
}

int main(){
int n;
cout<<"Enter a noumber:-";
cin>>n;
printFactor(n);
}