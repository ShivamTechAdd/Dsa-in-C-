#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    //linear search Approach.
    int arr[]={0,1,2,3,4,7,8,9};
    int n=7;
    int x=3;  
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            cout<<i;
            break;
        }
    }

}