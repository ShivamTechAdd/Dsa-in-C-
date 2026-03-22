#include<iostream>
using namespace std;
void print(int i,int n){
    //base case
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
   

}
int main(){
    int n;
    cout<<"Enter the noumber:-";
    cin>>n;
    cout<<endl<<endl;
    print(1,n); 
}