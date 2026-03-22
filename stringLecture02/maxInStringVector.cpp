#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
//string str="00000012345";
//long long x=stoll(str);
string arr[]={"0123","0023","456","00182","940","002901"};
int max=stoi(arr[0]);   //string t intiger . stoll:- string to long long.
string maxS=arr[0];
for(int i=1;i<=5;i++){
    int x=stoi(arr[i]);  //arr[i] ki integer value.
    if(max<x){
        max=x;
        maxS=arr[i];
    } 
}
cout<<max<<endl;
cout<<maxS<<endl;
 
}