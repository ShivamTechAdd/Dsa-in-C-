#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of 1st matrix:-";
    cin>>m;
    int n;
    cout<<"Enter columns of 1st matrix:-";
    cin>>n;

    int arr[m][n];
    cout<<"Enter element of array:-";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\n";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //wave print if(i%2==0 )-> normal printing and else reverse printing.
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
             cout<<arr[i][j]<<" ";
            }
        }
        else{  //i is odd .
            for(int j=n-1;j>=0;j--){
                 cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

}