#include<iostream>
using namespace std;
void sum1ToN(int sum,int n){
    //base case
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum1ToN(sum+n,n-1);   //recursive call;

}

int sum2From1ToN(int n){
    if(n==0) return 0;   //base case.
    int result= n+sum2From1ToN(n-1);
    return result;
}
int main(){
    int n;
    cout<<"Enter the noumber:-";
    cin>>n;
    cout<<endl<<endl;
    sum1ToN(0,n); 
    int result=sum2From1ToN(n);
    cout<<result;
}