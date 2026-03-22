#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter size of pascal triangle:-";
    cin>>m;
    vector<vector<int>> v;
    for(int i=1;i<=5;i++){
       vector<int> a(i);     //5 vectors are pushed of diffrent size.
       v.push_back(a);  
    }

    //generation.
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
           if(j==0||i==j){
            v[i][j]=1;
           }
           else{
            v[i][j]=v[i-1][j-1]+v[i-1][j];
           }
        }
    }

    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}