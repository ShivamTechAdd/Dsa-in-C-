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
    int n=v.size();
    int noZ=0;
    int noO=0;
    //first pass
    for(int i=0;i<n;i++){
        if(v[i]==0) noZ++;
        else noO++;
    }
    //second pass filling the elemnts.
    for(int i=0;i<n;i++){
        if(i<noZ) v[i]=0;
        else v[i]=1;
    }

}

void sort02(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;               //or we can use if , else if  or write swaping code in begin.
        if(v[i]==1&&v[j]==0){
            //or swap v[i],v[j];
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    cout<<"The given array is:-";
   display(v);
    //sort(v.begin(),v.end());
    
    //sort no of 0's and 1's method 1.
    sort01(v);
    cout<<"The sorted array using method 01 is:-";
    display(v);

     //sort no of 0's and 1's method 2.
     sort02(v);
     cout<<"The sorted array using method 02 is:-";
     display(v);


    
    
}
