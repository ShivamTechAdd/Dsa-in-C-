#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
void findUnique(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res ^ arr[i];  //xor of each element of array.
    }
    int temp =res;
    int k=0;
    while(true){
        if((temp & 1)==1){   //last bit of temp is set becouse 1 having only last bit is set 001.
            break;         //means we found a element in temp which last bit is set.
        }
        temp=temp>>1;
        k++;
    }
    int retval=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        if((num>>k & 1)==1) retval ^= num;
    }
    cout<<retval<<" "<<endl;
    res=retval ^res;
    cout<<res;
}

int main(){
    int arr[]={2,1,2,1,5,5,6,3};  //ans is 6 , 3.
    int n=sizeof(arr)/sizeof(arr[0]);
    findUnique(arr,n);
}