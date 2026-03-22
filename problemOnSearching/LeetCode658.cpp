#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> findClosestElements(vector<int> &arr,int k,int x){
    int n=arr.size();
    vector<int> ans(k);
    if(x<arr[0]){
    for(int i=0;i<n;i++){
       ans[i]=arr[i]; 
    }
    return ans;
}

if(x>arr[n-1]){
    int i=n-1;
    int j=k-1;
    while(j>=0){
        ans[j]=arr[i];
        j--;
        i--;
    }
    return ans;
}

int lo=0;
int hi=n-1;
bool flag=false; // if x is present in arr or not .
int t=0;  //this is used to travesre the ans array.
int mid=-1;
//binary search
while(lo<=hi){
     mid=lo+(hi-lo)/2;
    if(arr[mid]==x){
        flag=true;      //x is present in arr
        ans[t]=arr[mid];
        t++;
        break;
    }
    else if(arr[mid]>x) hi=mid-1;
    else lo=mid+1;
}
int lb=hi;   //when x is not present in arr.
int ub=lo;
if(flag==true){
    lb=mid-1;
    ub=mid+1;
}
while(t<k && lb>=0 && ub<=n-1){
    int d1=abs(x-arr[lb]);
    int d2=abs(x-arr[ub]);  //mod
    if(d1<=d2){
        ans[t]=arr[lb];
        //t++;
        lb--;
    }
    else{ //  d2>d1
        ans[t]=arr[ub];
        //t++;
        ub++;
    }
    t++;
}
if(lb<0){   //lb out of index. push first k element in vector.
    while(t<k){
        ans[t]=arr[ub];
        t++;
        ub++;
    }
}
if(ub>n-1){   //ub out of index. push lastst k element in vector in reverse.
    while(t<k){
        ans[t]=arr[lb];
        t++;
        lb--;
    }
}
sort(ans.begin(),ans.end());
return ans;
}


int main(){
vector<int> v={1,2,3,4,5};
int k=4;
int x=3;

vector<int> result=findClosestElements(v,k,x);
for(int i=0;i<result.size();i++){
    cout<<v[i]<<" ";
}
}