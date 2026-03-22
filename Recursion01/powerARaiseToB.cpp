#include<iostream>
using namespace std;

int power(int a,int b){
    if(a==0 && b==0){
        cout<<"0 raised to 0 is not defined."<<endl;
    }
    if(a==0) return 0;
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}

int main(){
    cout<<power(2,0)<<endl<<endl;
}