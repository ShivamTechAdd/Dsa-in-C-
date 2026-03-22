#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     vector<int> v(100);
     cout<<"Enter the element of array:- ";
      for(int i=0;i<v.size();i++){
         cin>>v[i];
      }            
     
    //bubble sort optimised
    
    for(int i=0;i<v.size()-1;i++){
      bool flag=true;     //sorted
      //traverse
      for(int j=0;j<v.size()-1-i;j++){ //swap
         if(v[j]>v[j+1]){
         swap(v[j],v[j+1]);
         flag=false;
         }
      }
      if(flag==true){   //swap didn't happen.
         break;
      }
    }  


//print
      for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
      } 

}