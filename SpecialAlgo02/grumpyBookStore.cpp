#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    //customers = [1,0,1,2,1,1,7,5]
    //grumpy = [0,1,0,1,0,1,0,1],
    //k=minutes = 3

    //using sliding window algo
    int k=minutes;
    vector<int>& crr= customers;   //renaming the vector.
    vector<int>& grr= grumpy;
    int n=crr.size();
    int m=grr.size();

    //previous windows loss
    int maxLoss=0;
    int prevLoss=0;
    int maxIdx=0;
    for(int i=0;i<k;i++){
      if(grr[i]==1)  prevLoss += crr[i] ;
    }
    maxLoss=prevLoss;    //it might happen that is is max loss of satisfaction.

    //current loss 
    int i=1;
    int j=k;
    while(j<n){
        int currLoss=prevLoss;
         if(grr[j]==1) currLoss += crr[j] ;
         if(grr[i-1]==1)  currLoss -= crr[i-1] ;
        
        if(maxLoss<currLoss){
            maxLoss=currLoss;
            maxIdx=i;
        }
        prevLoss = currLoss;
        i++;
        j++;
    }

    //from here we get that window from where there is max loss of satisfaction starts as maxIdx.
    //use k=3 ->all 0s of grumpy in that window super power of owner
    //filling 0s in the grumpy array window.

    for(int i=maxIdx;i<n;i++){   //n
        grr[i]=0;
    }
    // sum of  satisfaction .
    int sum = 0;
    for(int i=0;i<n;i++){   // find sum of crr but when grumpy is 0.  1,0,1,2,1,1,7,5 ->crr
       if(grr[i]==0)  sum += crr[i];                                          
    }                                                           
return sum;
}

int main(){
int customers[] = {1,0,1,2,1,1,7,5};
int grumpy[] = {0,1,0,1,0,1,0,1};
int n=sizeof(customers)/sizeof(customers[0]);
int m=sizeof(grumpy)/sizeof(grumpy[0]);
vector<int>crr(customers,customers+n);
vector<int>grr(grumpy,grumpy+m);
int minute=3;  //k

int maxSatisfaction=maxSatisfied(crr,grr,minute);
cout<<maxSatisfaction<<endl;
}