#include<iostream>
using namespace std;
int main(){
    int arr[]={12,34,56,7,8,99};
    int max=arr[0];  //INT_MIN
    int min=arr[0];  //INT_MAX
    for(int i=0;i<6;i++){
        if(max<arr[i])
        max=arr[i];
    }

    for(int i=0;i<6;i++){
        if(min>arr[i])
        min=arr[i];
    }
    cout<<max<<endl;
    cout<<min;

}