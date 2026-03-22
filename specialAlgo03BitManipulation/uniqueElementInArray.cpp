#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={2,1,3,2,1,5,5,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res = 0;
    for(int i=0;i<n;i++){
        res=res ^ arr[i]; //here xor is commutative so xor of reapeated elements is 0 and unique element left so return it .
    }
    cout<<"The one unique element in arr is :-"<<res;
}