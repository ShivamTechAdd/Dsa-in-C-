#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_to_decimal(string binary){
int n=binary.length();
int result=0;
for(int i=n-1;i>=0;i--){
    char ch=binary[i];   //ch woould be either 0 or 1.
    int num=ch - '0';    //converting into noumber. ascci of 1 - ascii of 0 =1  and ascci of 0 - ascii of 0 =0;
    result=result + num * (1 << (n-i-1));   //n-i-1 -> ulta indexing of string 8th index ko 0th index me convert ker diya.
}
return result;
}

int main(){
string str="111100";
int decimal=binary_to_decimal(str);
cout<<decimal<<endl;
}