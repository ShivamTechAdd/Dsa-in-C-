#include<iostream>
using namespace std;
void display(int *a,int n){    //arr renames to a usualy arr==a. a is a pointer which points arr.
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void change(int b[],int n){    //arr renames to b usualy arr==b.b is a pointer which points arr // int *b.
    b[0]=100;
}

int main(){
    int arr[]={1,4,2,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<" "<<"is size of array arr."<<endl;
    //accesing the elements of array while pasing in another function.
    //updation , pass by value/pass by reference.

    display(arr,n);
    change(arr,n);     //pass by reference.
    display(arr,n);

}