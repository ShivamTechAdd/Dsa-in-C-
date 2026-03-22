#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string commonPrifixes(vector<string>& str){
    int n=str.size();
    //01 sort the vector.
    if(str.size()==1)  return str[0];
    sort(str.begin(),str.end());
//02 compare 1st and last only.
string first=str[0];
string last=str[n-1];
string s="";
for(int i=0;i<min(first.size(),last.size());i++){
    if(first[i]==last[i]){
        s+=first[i];
    }
    else return s;
}
 return s;
}

void display(vector<string>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
}

int main(){
    vector<string> str;
    int n=str.size();
    str.push_back("flower");
    str.push_back("flow");
    str.push_back("flight");

    display(str);
    
    string result=commonPrifixes(str);
    cout<<result<<endl;
 
}