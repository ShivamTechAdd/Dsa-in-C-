#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    int result=a*power(a,b-1);
    return result;
}
int main(){
   int result= power(3,5);
   cout<<result<<endl;
}