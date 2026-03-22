#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:-";
    cin>>n;
    vector<int> f(n+10,0);  //1 based indexing igonre 0th index as dummy
    int m;
    cout<<"Enter m:-";
    cin>>m;
  
    for(int i=0;i<m;i++){
        int l,r;
        cout<<"Enter l , r:-";
        cin>>l>>r;
        f[l]+=1;
        f[r+1]+=-1;
    }
    //prifix sum
    for(int i=1;i<f.size();i++){
        f[i]=f[i-1]+f[i];
    }
    
    //no of boxes with i coins
    vector<int> c(1000005,0); 
    for(int i=0;i<=n;i++){
        int coins=f[i];
        c[coins]++;
        //or c[f[i]]++;
    }
    //suffix sum of c[i]
    for(int i=c.size()-2;i>=0;i--){
        c[i]=c[i]+c[i+1];
    }
    //process q queris
    int q;
    cout<<"Enter q:-";
    cin>>q;
    while(q--){
        int num; //atleast num vale no of boxes;
        cout<<"Enter num:-";
        cin>>num;
        cout<<c[num]<<endl;
    }

}