#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};    
    int n=5;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl<<endl;
    //selection sort.
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minIdx=-1;
        //minimum element claculation in orange box.
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];   //min element calculated.
                minIdx=j;     //min index calculated.
            }
        }
        swap(arr[i],arr[minIdx]);
    }                             
    //printing.
    for(int ele:arr){
        cout<<ele<<" ";
    }

}

















