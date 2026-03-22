#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=12;   //op=18; is lower bound of x;

    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;    //to integer capacity overflow protection.
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid-1]<<endl;
            break;
        }
        else if(arr[mid]<x) lo=mid+1;   //becouse we want lower bound and preventing from infinite looping.
        else {                          //arr[mid]>x;  here arr[mid] itself cant be part of lower bound;
        hi=mid-1;                        //becouse we need lower bound.
        }
    }
    if(flag==false){
        cout<<arr[hi];   //becouse (hi<lo) means element not found and its lower bound present at hi.
    }
}