#include<iostream>
#include<string.h>
using namespace std;
int main(){
string str="Adarsh is a nerd student ";
cout<<str.size()<<endl;    //.length()
str.push_back('o');
str.push_back('j');
str.push_back('h');
str.push_back('a');
cout<<str<<endl;
str.pop_back();
cout<<str<<endl;

//+ operator.

string s="Shivam";
cout<<s<<endl;
string t="ojha";
s=s+t;    //to concate or Append.
cout<<s<<endl;

//reverse
//reverse(t.begin(),t.end());

//t.substr(2,3); 
//integer to string

int a=123;
string ss=to_string(a);
cout<<ss<<endl;
}