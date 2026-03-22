#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

vector<string> decimal_to_binary(int noumber){
    vector<string> result;
    while(noumber>0){
        if(noumber % 2 == 0){
            //even lsb=0;
            result.push_back("0");   //prepend peeche se bharna.
        }
        else{
            //odd lsb=1;
            result.push_back("1");
        }
        noumber=noumber>>1;   //noumber=noumber/2;
    }
    reverse(result.begin(),result.end()); //0001 -> 1000
    return result;
}

int main(){
int n;
cout<<"Enter the noumber:-";
cin>>n;
vector<string> result=decimal_to_binary(n);
for(string ele:result){
    cout<<ele<<" ";
}
}