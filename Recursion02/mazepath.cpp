#include<iostream>
using namespace std;
int mazePath(int sr,int sc,int er,int ec){    //sr=starting row and ec=ending column
    //base case.
    if(sr>er || sc>ec) return 0;               //goes out of matrix.
    if(sr==er && sc==ec) return 1;             //banda reaches to destination.
    int rightWays=mazePath(sr,sc+1,er,ec);    //column increases.
    int downtWays=mazePath(sr+1,sc,er,ec);    //row increases.
    int totalWays=rightWays + downtWays;
    return totalWays;
}
int main(){
    int sr;
    cout<<"Enter starting row:-";
    cin>>sr;
    int sc;
    cout<<"Enter starting column:-";
    cin>>sc;
    int er;
    cout<<"Enter ending row:-";
    cin>>er;
    int ec;
    cout<<"Enter ending column:-";
    cin>>ec;
    cout<<mazePath(sr,sc,er,ec);
}