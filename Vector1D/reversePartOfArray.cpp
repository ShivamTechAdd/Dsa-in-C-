#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int>& v){
while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;

    i++;
    j--;
}
return;

}

void reverse(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    
        i++;
        j--;
    }
}

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(6);
    v1.push_back(5);
    display(v1);
    //reverse(v1);
    //display(v1);
    reversePart(0,3,v1);
    display(v1);
}