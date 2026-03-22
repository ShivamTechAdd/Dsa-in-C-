#include<iostream>
#include<vector>
using namespace std;

void mergeTwoSortedArray(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0;   //a
    int j=0;    //b
    int k=0;    //c
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j])   res[k++]=a[i++];
        else  res[k++]=b[j++];
    }
    if(i>=a.size()){               
        while(j<b.size()) res[k++]=b[j++];
    }
    if(j>=b.size()){
        while(i<a.size()) res[k++]=a[i++];  
    }
}

void mergeSort(vector<int>& v){
    int n=v.size();

    //base case.
    if(n==1) return;            //1 element or 1 size element is already sorted.

    int n1=n/2 , n2=n-n/2;

    vector<int> a(n1),b(n2);    // vector<int> b(n2);// vector<int> a(n1); ek sath declare two vector.

    //copy paste elements into both vectors.
    for(int i=0;i<n1;i++){   
        a[i]=v[i];               //5 1 3  ..........
    }
    for(int i=0;i<n2;i++){ 
        b[i]=v[i+n1];           //0 4 9 6  .........
    }

    //magic or say recursion on our both smaller array .
    mergeSort(a);         
    mergeSort(b);

    //merge both sorted array
    mergeTwoSortedArray(a,b,v);
    a.clear();  //delete this vector after merging all this to improve space complexity.
    b.clear();  //delete this vector after merging space co,plecity=O(n);
}

int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);     //copy of arr
    cout<<"Old Array is:-";
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    mergeSort(v);   //our v is sorted now 
    cout<<"New Sorted Array is:-";
    for(int ele:v){
     cout<<ele<<" ";
    }
}