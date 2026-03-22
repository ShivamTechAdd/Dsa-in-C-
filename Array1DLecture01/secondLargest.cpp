#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6,7,9,88};
    int max=arr[0];
    for(int i=0;i<8;i++){
        if(max<arr[i]) 
        max=arr[i];
    }
    cout<<max<<endl;

    int smax=arr[0];   //second max
    for(int i=0;i<8;i++){
        if(smax<arr[i]&&arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<smax;
}