#include<iostream>
#include<stack>
using namespace std;
string solve(string val1,string val2,char ch){
    //infix is ( val1 op val2);
    string s="";
    s+=val1;          //we have to append string in string by using + operator.
    s.push_back(ch);  //if we have push or append char to string use s.push_back(ch);
    s+=val2;          //we have to append string in string by using + operator.
    return s;
}
int main(){
    // int x=2+6*4/8-2;
    string s="79+4*8/3-"; //postfix expresssion.
   //we need one stack;
   stack<string> val;
   for(int i=0;i<s.length();i++){
        //check if s[i] is digit (0-9) or not.
        //int ascii=(int)(s[i]);
        if(s[i]>=48 && s[i]<=57){  //0->48  and 9->57 //Or if(s[i]>=48 && s[i]<=57); it is a digit.
            val.push(to_string(s[i]-48));  //no = ascii-48; char-int =Ascii it is actual value;
        }
        else{ //s[i] is not a digit it is -> + - * / 
            //kam kero 
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]);   //s[i]-> char or ch.
            val.push(ans);
        }
   }
   cout<<"The infix expression is:- "<<val.top()<<endl;
}