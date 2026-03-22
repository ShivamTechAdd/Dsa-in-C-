#include<iostream>
#include<string>
#include<vector>
using namespace std;

void generateBinaryString(string s,int n){
    if(s.length()==n){               //n==0 return;
        cout<<s<<endl;
        return;
    }
    generateBinaryString(s+"0",n);    //or n-1;
    if(s=="" || s.length()-1=='0') generateBinaryString(s+"1",n);
    
}

int main(){
int n=3;
generateBinaryString("",n);
}