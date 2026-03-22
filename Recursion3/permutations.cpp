#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printPermutation(string ans,string original){
    if(original==""){
        cout<<ans<<"\n";
        return;
    }
    for(int i=0;i<original.length();i++){   //multiple calls at each level.
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        printPermutation(ans+ch,left+right);
    }
}

int main(){
    string str="abc";
    printPermutation("",str);




    //**************************************************//

    //substring.
    //cout<<str.substr(0,2); //(a,b)->a is starting index and is inclusive ,and b means from a go to b length.

    //c ka index hai 2 ,string ki total length=3 (0-4);
    // string left=str.substr(0,2);
    // cout<<left<<endl;
    // string Right=str.substr(3,2);
    // cout<<Right<<endl;

}     