#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,5,10};  //0 to 4 and 5 to 6 sum is equal so it can be partitioned.
    int n=sizeof(arr)/sizeof(arr[0]);    
 
   //formation of prifix sum array.
    for(int i=1;i<n;i++){     //1 3 6 10 15 20 30 
        arr[i] += arr[i-1];
    }
    //check if any x exist means such index from where our array is equally divided into two halves of equal sum.
    // bool flag=false;
    int idx=-1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
        // flag=true;
        idx=i;
        break;
        }
    }
    if(idx!=-1) cout<<"Yes it can be partiotioned from index:- "<<idx;   //true or if(flag==true)
    else cout<<"No it can't be partiotioned";
}