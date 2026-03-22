#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printPermutation(vector<string>& v,string ans,string original){
    if(original==""){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<original.length();i++){   //multiple calls at each level.
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        printPermutation(v,ans+ch,left+right);
    }
}

int main(){
    string str="abc";
    vector<string> v;
    printPermutation(v,"",str);
    for(string ele:v){
        cout<<ele<<endl;
    }
}