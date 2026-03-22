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

    //spiral wave print .

    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;

    for(int i=0;i<m;i++){
        if(minr<=maxr && minc<=maxc){
        //right -> column wise j
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;

        if(minr>maxr || minc>maxc) break;

        //down -> row wise i
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;

        if(minr>maxr || minc>maxc) break;

        //left -> column wise j
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;

        if(minr>maxr || minc>maxc) break;

        //up -> row wise i
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
         }
            minc++;

        if(minr>maxr || minc>maxc) break;

        } //if block outer wala.

    }

}