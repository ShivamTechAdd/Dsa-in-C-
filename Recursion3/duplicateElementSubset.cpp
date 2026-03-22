#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans,string original,int idx,vector<string> &vs,bool flag){
    if(idx==original.length()){
        vs.push_back(ans);
        return;
    }
    char ch=original[idx];
    if(original.length()==1){
        if(flag==true) 
        storeSubset(ans+ch,original,idx+1,vs,true);
        storeSubset(ans,original,idx+1,vs,true);
        return;   //neeche ka code na chale.
    }
   char dh=original[idx+1];
   if(ch==dh){
    if(flag==true) 
    storeSubset(ans+ch,original,idx+1,vs,true);
    storeSubset(ans,original,idx+1,vs,false);
   }
   else{
    storeSubset(ans+ch,original,idx+1,vs,true);
    storeSubset(ans,original,idx+1,vs,false);
   }
}
int main(){
    string str="aaab";
    int idx=0;
    vector<string> v;
    storeSubset("",str,idx,v,true);
    for(string ele:v){
       cout<<ele<<endl;
    }
}  