#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1(3);     //0 0 0
    cout<<v1[0]<<endl;
    cout<<v1[1]<<endl<<endl;

    vector<int> v2(3,5);     //5 5 5   5 is initial capacity.
    cout<<v2[0]<<endl;
    cout<<v2[1]<<endl;
    cout<<v2[2]<<endl;

    //int arr[3][4];
   vector<vector<int>> v3(3);   //this will store 3 1D vectors.
   vector<vector<int>> v4(3,vector<int>(2));  //3 cross 2 vector.
   vector<vector<int>> v5(3,vector<int>(2,5));  //1D vector ki size 2 hogi aur intital value 5 hogi .
   cout<<v5.size()<<endl;       //this will print row no or size of row.
    cout<<v5[0].size()<<endl<<endl;  //this will print column no or size of column.

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<v5[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<v5[0].size()<<" ";
    cout<<v5[1].size()<<" ";
    cout<<v5[2].size()<<" ";

}