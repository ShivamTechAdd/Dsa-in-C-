#include<iostream>
#include<vector>
using namespace std;
int main(){
//int arr[2][3];
// vector<vector<int>> v;  //2d vector.

int m;
cout<<"Enter the no of rows/columns:-";
cin>>m;
int arr1[m][m];
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cin>>arr1[i][j];
    }
}

cout<<endl;

for(int i=0;i<m;i++){
    for(int j=i+1;j<m;j++){
        //swaping of i,j and j,i elemnts.
        int temp=arr1[i][j];
        arr1[i][j]=arr1[j][i];
        arr1[j][i]=temp;
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
}

}