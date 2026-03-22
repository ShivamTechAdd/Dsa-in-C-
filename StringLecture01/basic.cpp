#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // string str="Adarsh";
    // cout<<str<<endl;
    // str[1]='o';
    // cout<<str<<endl;   //string in c++ are mutable.

    int n;
    cout<<"Enter value of n:-";
    cin>>n;
    char str1[n];
    cout<<"Enter value of string:-";
    for(int i=0;i<n;i++){
        cin>>str1[i];
    }
    for(int i=0;str1[i]!='\0';i++){
        if(i%2==0) str1[i]='a';
    }
    cout<<str1<<endl;
}