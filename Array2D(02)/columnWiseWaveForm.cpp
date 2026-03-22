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

    //column wise wave print . outer loop is j and inner loop is i.

    for(int j=0;j<n;j++){
        if(j%2==0){   //j is even
            for(int i=0;i<m;i++){
             cout<<arr[i][j]<<" ";
            }
        }
        else{  //j is odd .
            for(int i=m-1;i>=0;i--){
                 cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

}