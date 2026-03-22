#include<iostream>
#include<vector>
#include<math.h>
#include<limits.h>
using namespace std;
void printFactor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}
int main(){
int n=60;
printFactor(n);
}