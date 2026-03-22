#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printSubset(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch=original[idx];
    printSubset(ans,original,idx+1);
    printSubset(ans+ch,original,idx+1);
}
int main(){
    string str="abc";
    int idx=0;
    printSubset("",str,idx);
}     