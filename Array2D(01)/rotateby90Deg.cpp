#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
//01) transpose of matrix
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            //swap i,j and j,i .
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //reverse each row.
    for(int k=0;k<3;k++){       //traversing each rows.
        int i=0;
        int j=2;  //n-1
        while(i<j){             //swaping k,i and k,j.
            int temp=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
            i++;
            j--;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}