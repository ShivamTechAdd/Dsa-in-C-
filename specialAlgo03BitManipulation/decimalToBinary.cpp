#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

string decimal_to_binary(int noumber){
    string result="";
    while(noumber>0){
        if(noumber % 2 == 0){
            //even lsb=0;
            result ="0" + result;   //prepend peeche se bharna.
        }
        else{
            //odd lsb=1;
            result="1" + result;
        }
        noumber=noumber>>1;   //noumber=noumber/2;
    }
    return result;
}

int main(){
int n;
cout<<"Enter the noumber:-";
cin>>n;
string result=decimal_to_binary(n);
cout<<result<<endl;
}