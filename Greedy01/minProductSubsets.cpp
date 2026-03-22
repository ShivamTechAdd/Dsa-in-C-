#include<iostream>
#include<algorithm>
#include<map>
#include<limits.h>
#include<vector>
using namespace std;

int minProduct(vector<int> &arr){
    int prodPos=1;
    int prodNeg=1;
    int largestNegative=INT_MIN;
    int cntZero=0 , cntNeg=0 , cntPos=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            cntNeg++;
            prodNeg*=arr[i];
            largestNegative=max(largestNegative,arr[i]);
        }

        if(arr[i]==0) cntZero++;

        if(arr[i]>0){
            cntPos++;
            prodPos*=arr[i]; //product of all positive elemnet in array;
        }
    }

    if(cntNeg==0){ //no negative present means all positive 
        if(cntZero >0) return 0;     //zeros exist
        else{   //cntZero == 0 no zeros present ; noumber is positive with no zeros minProd=minelem of array;
           auto it = min_element(arr.begin(),arr.end()); //return a pointer of min element of iterator;
           return *it;  //derefrenced and then return ;
        }
    }
 
    else{   //cntNeg>0 negative present ;
        if(cntZero>0) return 0;
        else if(cntNeg %2 == 0){ //means even no of negatives present in array;
            //except largest neg elem;
            prodNeg /= largestNegative;
            return prodNeg*prodPos;

        }
        else{ //cntNeg %2 == 0   //means odd no of negatives present in array;
            return prodNeg*prodPos;
        }
    }
}

int main(){
vector<int> arr={1,-4,-9,05};
int res=minProduct(arr);
cout<<res<<endl;
}