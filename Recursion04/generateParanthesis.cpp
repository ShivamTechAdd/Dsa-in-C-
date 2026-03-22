#include<iostream>
#include<string>
#include<vector>
using namespace std;
void paraenthesis(string s,int open,int close,int n){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n)    paraenthesis(s+'(',open+1,close,n);
    if(close<open)   paraenthesis(s+')',open,close+1,n);
}
int main(){
   int n=3;
   paraenthesis("",0,0,n);
}