#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void sort01(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[j]>=0) j--;
        if(v[i]<0) i++;
        if(i>j) break;
        if(v[i]>=0 && v[j]<0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
        }
    }


int main(){
    vector<int> v;
    v.push_back(-1);
    v.push_back(2);
    v.push_back(-3);
    v.push_back(-5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(-2);
    v.push_back(0);

    cout<<"The given array is:-";
    display(v);
    //sort(v.begin(),v.end());


     //sort no of negatives's and positive's method 1.
     sort01(v);
     cout<<"The sorted array using method 01 is:-";
     display(v);
    
}