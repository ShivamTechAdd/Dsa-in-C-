#include<iostream>
using namespace std;

void factUpto(int n){
    // for(int i=1;i<=n;i++){
    //      int f=1;
    //     for(int j=2;j<=i;j++){
    //     f*=j;
    //     }
    //     cout<<f<<endl;
    // }

        int f=1;
        for(int i=1;i<=n;i++){
        f*=i;
        cout<<f<<endl;
        }
}

int main(){
    factUpto(5);
}