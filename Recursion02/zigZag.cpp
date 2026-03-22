#include<iostream>
using namespace std;
void zigZag(int n){
    if(n==0) return;
    cout<<n<<" ";  //pre
    zigZag(n-1);
    cout<<n<<" ";  //in
    zigZag(n-1);
    cout<<n<<" ";  //post
}
int main(){
    cout<<endl;
    zigZag(1);
    cout<<endl;
    zigZag(2);
    cout<<endl;
    zigZag(3);
    cout<<endl;
    zigZag(4);
    cout<<endl;
    zigZag(5);
    cout<<endl;
}