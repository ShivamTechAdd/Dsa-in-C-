#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& arr1,vector<int>& arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int> arr3(m+n);
    int i=0;   //arr1
    int j=0;   //arr2
    int k=0;    //arr3

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            // k++;
        }
        else{            //arr2[j]>arr1[i]
            arr3[k]=arr2[j];
            j++;
            // k++;
        }
        k++;
    }
    //for remaining elements
    if(i==n){    //arr1 ke sare elemnts are copied .
        while(j<m){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(j==m){       //arr2 ke sare elemnts are copied .
        while(i<n){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }
    return arr3;
}

int main(){
// vector<int> arr1(4);   //0 0 0 0
// arr1.push_back(1);     //0 0 0 0 1

vector<int> arr1;   
arr1.push_back(1);  
arr1.push_back(3);
arr1.push_back(5);
arr1.push_back(7);

for(int i=0;i< arr1.size();i++){
    cout<<arr1[i]<<" ";
}
cout<<endl;

vector<int> arr2;
arr2.push_back(2);
arr2.push_back(4);
arr2.push_back(6);
arr2.push_back(8);
arr2.push_back(9);
arr2.push_back(10);

for(int i=0;i< arr2.size();i++){
    cout<<arr2[i]<<" ";
}
cout<<endl;

vector<int> res=merge(arr1,arr2);

for(int i=0;i< res.size();i++){
    cout<<res[i]<<" ";
}
cout<<endl;

}