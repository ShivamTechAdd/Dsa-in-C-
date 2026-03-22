#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=20;   //op=18; is lower bound of x;
    for(int i=0;i<n;i++){
        if(arr[i]>=x) {
            cout<<arr[i-1]<<" ";
            break;
        }
    }
}
