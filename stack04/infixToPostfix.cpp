#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch =='+' || ch =='-') return 1;
    else return 2;   //ch=='*' || ch='/';
}
string solve(string val1,string val2,char ch){
    //we have to storeprifix in ans.
    //prifix is (op val1 val2);
    string s="";
    s+=val1;             //we have to append string in string by using + operator.
    s+=val2;            //we have to append string in string by using + operator.
    s.push_back(ch);   
    return s;
}

int main(){
    // int x=2+6*4/8-2;
    string s="(7+9)*4/8-3"; //infix expresssion to prifix exp.
   //we need two stack;
   stack<string> val; 
   stack<char> opr;
   for(int i=0;i<s.length();i++){
        //check if s[i] is digit (0-9) or not.
        if(s[i]>=48 && s[i]<=57){  
            val.push(to_string(s[i]-48));  //to_string(s[i]-48) converts int to srting.
        }
        else{ //s[i] is not a digit it is -> + ,-, *, ( , ) , / ;
            if(opr.size()==0 ) opr.push(s[i]);
            else if(s[i]=='(') opr.push(s[i]);
            else if(opr.top()=='(') opr.push(s[i]);
            else if(s[i]==')') {  //kam kero tab tak jab tak ) na dikh jaye;
                while(opr.top()!='('){
                    //kam work
                    char ch=opr.top();
                    opr.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
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
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
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
    string val2=val.top();
    val.pop();
    string val1=val.top();
    val.pop();
    string ans = solve(val1,val2,ch);
    val.push(ans);
   }
   cout<<"The postfix exp is:-> "<<val.top()<<endl;
}