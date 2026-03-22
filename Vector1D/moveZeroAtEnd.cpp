#include<iostream>
#include<vector>
using namespace std;
//**method 01 start**/
void moveZeros(vector<int>& arr){
    int noz=0;
    int n=arr.size();
    vector<int> v;
    for(int i=0;i<n;i++){
        if(arr[i]!=0) v.push_back(arr[i]);    //insert non zero elemnts.
        else noz++;
    }
    for(int i=1;i<=noz;i++){      //insert zeros at end of vector.
        v.push_back(0);
    }
    for(int i=0;i<n;i++){         //change in original array.
        arr[i]=v[i];
    }

    //display arr after modification.
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//**method 01 end**/

//**method 02 start**/
//i=0 -> 0's pe travel ker raha hai.
//j=0 -> non 0's pe travel ker raha hai.
void moveZeros2(vector<int>& v){
int n=v.size();
int i=0;
int j=0;
while(i<=j){
    if(v[i]==0 && v[j]!=0){
        if(j>i)swap(v[i],v[j]);
        else j++;
    }
    else if(v[i]!=0) i++;
    else if(v[j]==0) j++;
}

//display arr after modification.
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}
//**method 02 end**/

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(0);
    v.push_back(2);
    v.push_back(12);

    moveZeros(v);
    cout<<endl<<endl;
    moveZeros2(v);


}