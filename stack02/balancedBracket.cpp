#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    //when string length is odd.
    if(s.length()%2!=0) return false;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);

        else{        //s[i]==')'
            if(st.size()==0) return false;
            else st.pop();  
        }
    }
    if(st.size()==0) return true;
    else return false;
}

int main(){
string s1="()()()";
string s2="()()(";
cout<<isBalanced(s1)<<endl;
cout<<isBalanced(s2)<<endl;
}