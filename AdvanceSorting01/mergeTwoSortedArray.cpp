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

    //ho sakta hai ki koi array abhi bacha ho.

    if(i>=a.size()){                //a is fully completed and goes out of bound.
        while(j<b.size()) res[k++]=b[j++];
    }
    if(j>=b.size()){
        while(i<a.size()) res[k++]=a[i++];  //b is fully completed and goes out of bound.
    }

}


int main(){
int arr1[]={1,4,5,8};
int n=sizeof(arr1)/sizeof(arr1[0]);

vector<int> a(arr1,arr1+n);   //creating copy of arr1 a->1 4 5 8.
cout<<"Array 1:-";
for(int ele:a){
    cout<<ele<<" ";
}
cout<<endl;

int arr2[]={2,3,6,7,9,10};
int m=sizeof(arr2)/sizeof(arr2[0]);

vector<int> b(arr2,arr2+m);  // //creating copy of arr2 b->2 3 6 7 8 9 10.
cout<<"Array 2:-";
for(int ele:b){
    cout<<ele<<" ";
}
cout<<endl;

vector<int> res(m+n);
mergeTwoSortedArray(a,b,res);
cout<<"Array res:-";
for(int ele:res){
cout<<ele<<" ";
}
}