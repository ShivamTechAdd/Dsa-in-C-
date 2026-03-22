#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5,7);         //intial size is 5 and each elemnt value is 7.          
    cout<<v.size()<<endl;       //5
    cout<<v.capacity()<<endl;   //5
    cout<<v[4];
   
    
}