#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch =='+' || ch =='-') return 1;
    else return 2;   //ch=='*' || ch='/'
}
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1 + val2;
    else if(ch=='-') return val1 - val2;
    else if(ch=='*') return val1 * val2;
    else return val1 / val2;   //if(ch=='/')
}
int main(){
    // int x=2+6*4/8-2;
    string s="(7+9)*4/8-3"; //infix expresssion.
   //we need teo stack;
   stack<int> val;
   stack<char> opr;
   for(int i=0;i<s.length();i++){
        //check if s[i] is digit (0-9) or not.
        //int ascii=(int)(s[i]);
        if(s[i]>=48 && s[i]<=57){  //0->48  and 9->57 //Or if(s[i]>=48 && s[i]<=57); it is a digit.
            val.push(s[i]-48);  //no = ascii-48; char-int =Ascii it is actual value;
        }
        else{ //s[i] is not a digit it is -> + - * ( , )/ 
            if(opr.size()==0 ) opr.push(s[i]);
            else if(s[i]=='(') opr.push(s[i]);
            else if(opr.top()=='(') opr.push(s[i]);
            else if(s[i]==')') {  //kam kero tab tak jab tak ) na dikh jaye;
                while(opr.top()!='('){
                    //kam work
                    char ch=opr.top();
                    opr.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                opr.pop();   //pop() the opening bracket '(';
            }
            else if(priority(s[i]) > priority(opr.top()))  opr.push(s[i]);
            else{   //opr.size()!=0 &&  priority(s[i]) <= priority(opr.top())

               while(opr.size()>0 &&  priority(s[i]) <= priority(opr.top())){
                    //then do some Kaam:- val1 opr val2.
                    char ch=opr.top();
                    opr.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
               }
               //then push the opr having priority less or equal to opr.top();
               opr.push(s[i]);
            }
            
        }
   }
   //the opr stack can have values.
   //so make it empty;
   while(opr.size()>0){
    //work;
    char ch=opr.top();
    opr.pop();
    int val2=val.top();
    val.pop();
    int val1=val.top();
    val.pop();
    int ans = solve(val1,val2,ch);
    val.push(ans);
   }
   cout<<val.top()<<endl;
   cout<<(7+9)*4/8-3;
}