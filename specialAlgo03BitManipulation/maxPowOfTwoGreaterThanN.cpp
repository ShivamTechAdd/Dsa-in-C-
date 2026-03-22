#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
//brian kernigens algorithm.
void pow_Of_Two_greater_Than_N(int n){   //n=22
    int temp;
    while(n!=0){
        temp=n;            //temp=22 ,20 ,16
        n=(n & (n-1));     //n=20 ,16 ,0  // n=0 loop terminated.
    }
    cout<< 2*temp ;  //this is largerer power than n. //temp=16 just multiply temp by 2 is just greater than n.
    return;
}
int main(){
int n;
cout<<"Enter a noumber:-";
cin>>n;
pow_Of_Two_greater_Than_N(n);
}