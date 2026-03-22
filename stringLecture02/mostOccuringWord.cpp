#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="raghav is a maths teacher. He is a dsa mentor as well";
    stringstream ss(str);
    string temp;
    vector<string> vs;
    while(ss>>temp){
        vs.push_back(temp);
    }

    //print the vector vs.
    for(int i=0;i<vs.size();i++){
        cout<<vs[i]<<endl;
    }
    cout<<endl;

    sort(vs.begin(),vs.end());

    for(int i=0;i<vs.size();i++){        //after sorting .
        cout<<vs[i]<<endl;
    }
    cout<<endl<<endl;
    //******************************** */
    int maxCount=1;
    int count=1;
    for(int i=1;i<vs.size();i++){
        if(vs[i]==vs[i-1]) count++;
        else count=1;
        maxCount=max(maxCount,count);
    }
    cout<<maxCount<<endl<<endl<<endl;
     count=1;
    for(int i=1;i<vs.size();i++){
        if(vs[i]==vs[i-1]) count++;
        else count=1;
       if(count==maxCount){
        cout<<vs[i]<<":- "<<maxCount<<endl;
       }
    }
}