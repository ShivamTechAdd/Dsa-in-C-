#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s;
    cout<<"Enter your string:-";
    getline(cin,s);
    sort(s.begin(),s.end());   //space comes first always becouse their Ascii value is smaller.
    cout<<s<<" ";              //sort can sort on the basis of Ascii values .

    cout<<endl;

    char ch=' ';
    cout<<(int)ch;

}