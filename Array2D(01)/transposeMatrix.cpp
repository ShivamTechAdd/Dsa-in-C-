#include<iostream>
using namespace std;
int main(){
    //printing transpose means column wise printing.
    int arr[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int res[3][2];
    for(int j=0;j<3;j++){
        for(int i=0;i<2;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}