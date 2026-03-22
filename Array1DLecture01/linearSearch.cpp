#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int x;
    cout<<"Enter value of x:-";
    cin>>x;
    bool flag=false; //value not found.
    for(int i=0;i<7;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true)
    cout<<"value prexent in array.";
    else cout<<"Value absent in array";
}