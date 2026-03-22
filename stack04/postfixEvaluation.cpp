#include<iostream>
#include<stack>
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1 + val2;
    else if(ch=='-') return val1 - val2;
    else if(ch=='*') return val1 * val2;
    else return val1 / val2;   //if(ch=='/')
}
int main(){
    // int x=2+6*4/8-2;
    string s="79+4*8/3-"; //postfix expresssion.
   //we need one stack;
   stack<int> val;
   for(int i=0;i<s.length();i++){
        //check if s[i] is digit (0-9) or not.
        //int ascii=(int)(s[i]);
        if(s[i]>=48 && s[i]<=57){  //0->48  and 9->57 //Or if(s[i]>=48 && s[i]<=57); it is a digit.
            val.push(s[i]-48);  //no = ascii-48; char-int =Ascii it is actual value;
        }
        else{ //s[i] is not a digit it is -> + - * / 
            //kam kero 
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int ans=solve(val1,val2,s[i]);   //s[i]-> char or ch.
            val.push(ans);
        }
   }
   cout<<val.top()<<endl;
   cout<<(7+9)*4/8-3;
}