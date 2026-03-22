#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
string str="raghav is    a maths teacher";
stringstream ss(str);
string temp;

while(ss>>temp){   //taking input from stream to temp (here our stream ss provides inpute to temp).   cin>>x;
    cout<<temp<<endl;
}

}