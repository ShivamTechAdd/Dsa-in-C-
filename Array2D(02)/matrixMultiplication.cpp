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

    int p;
    cout<<"Enter rows of 2nd matrix:-";
    cin>>p;
    int q;
    cout<<"Enter columns of 2nd matrix:-";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter element of first array:-";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        cout<<"\n";

        int b[p][q];
        cout<<"Enter element of second array:-";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }

        cout<<"\n";

        //resultant matrix 

        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){    //multiplication. res[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
              res[i][j]=0;
              for(int k=0;k<p;k++){   //p or n.
                res[i][j]+=a[i][k]*b[k][j];
              }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<"The resultant matrix is:- "<<res[i][j]<<" ";
            }
            cout<<endl;
        }

    } //if block
    else{
        cout<<"Matrix multiplication not posiible.";
    }
    
}