#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //pair class :-it is stl
    pair<string,int> pr;
    pr.first="Adarsh";
    pr.second=5;
    cout<<pr.first<<endl;
    cout<<pr.second<<endl<<endl;


    unordered_map<string,int> mp; //key and value 
    // pair<string ,int> p1;
    // p1.first="Shivam";
    // p1.second=2220837;
    // mp.insert(p1);

    mp["Shivam"]=2220837;
    mp["Raghav"]=2220836;
    mp["harsh"]=2220687;

    for(pair<string,int> p:mp){
        cout<<p.first<<" "<<p.second<<" ";
    }
    cout<<endl;
    //or
    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<" ";
    }
    cout<<endl;

    mp.erase("Raghav"); //only key.

    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<" ";
    }
    cout<<endl;
    cout<<mp.size()<<endl;
    // mp.find("Shivam"!=mp.end());
    cout<<mp["Shivam"]; //key->value 2220837.
}