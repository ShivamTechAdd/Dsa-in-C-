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
    int k;
    vector<int> v1;
    cout<<"Enter value of k:-";
    cin>>k;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(6);
    v1.push_back(5);
    display(v1);
    int n=v1.size();
    if(k>n) k=k%n;
    //rotating our array.
    reversePart(0,v1.size()-1-k,v1);
    reversePart(v1.size()-k,v1.size()-1,v1);
    reverse(v1);
    cout<<"The array is rotated by " <<k<< " :-"<<endl;
    display(v1);
}