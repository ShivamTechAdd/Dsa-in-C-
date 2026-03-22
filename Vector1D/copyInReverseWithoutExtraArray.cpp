#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}


int main(){
   //reverse in same array using two pointer
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(6);
    v1.push_back(5);

    display(v1);

    //reverse using two pointer by while loop.

    // int i=0;
    // int j=v1.size()-1;
    // while (i<=j){
    //     //swap v[i],v[j] ;
    //     int temp=v1[i];
    //     v1[i]=v1[j];
    //     v1[j]=temp;

    //     i++;
    //     j--;
    // }

     //reverse using two pointer by for loop.

     for(int i=0,j=v1.size()-1;i<=j;i++,j--){
        //swap v[i],v[j] ;
        int temp=v1[i];
        v1[i]=v1[j];
        v1[j]=temp;
     }

    // reverse(v1.begin(),v1.end());
    
    display(v1);
    
}