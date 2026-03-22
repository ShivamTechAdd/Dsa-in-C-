#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s;
    cout<<"Enter your string:-";
    getline(cin,s);

    string t;
    cout<<"Enter your string:-";
    getline(cin,t);

    sort(s.begin(),s.end());   
    cout<<s<<" ";  

    cout<<endl;

    sort(t.begin(),t.end());   
    cout<<s<<" ";              

    cout<<endl;

    if(s==t){
        cout<<true<<endl;
        cout<<"Both are anagrams .";
    }
    else{
        cout<<false<<endl;
        cout<<"Both are not anagrams .";
    }
    

}