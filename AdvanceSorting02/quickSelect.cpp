#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

//partion algo used to return pivot index and place si element at its right position which is pivot idx.
// 5,1,8,2,7,6,3,4
int partition(int arr[],int si,int ei){
    // int pivotEle=arr[si];      // method 01 but its tc is O(n*n);
    int pivotEle=arr[(si+ei)/2];   //method 02 randmised pivot index and its tc is O(n*log(n));
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotEle) count++;
    }
    int pivotIdx=count+si;           // 4+0 = 4
    swap(arr[si],arr[pivotIdx]);   // 7,1,8,2,5,6,3,4  || pivotEle=arr[pivotIdx];
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){   //exactly same as sort 0s and 1s.
        if(arr[i]<=pivotEle) i++;     //element chota ya baraber hai to left side of pivot element.
        if(arr[j]>pivotEle) j--;
        else if(arr[i]>pivotEle && arr[j]<=pivotEle){   // 4 1 3 2 5 6 8 7  pivot se chote left me and oivot se bade uske right me.
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

int kthSmallest(int arr[],int si,int ei,int k){
    int pi=partition(arr,si,ei); 
    if(pi+1 == k) return arr[pi];                                     //indexing is 0 based so at 1st index after sorting we have 2nd smallest element.
    else if(pi+1 < k) return kthSmallest(arr,pi+1,ei,k);                     //then the next smallest elements are at right side if pivot so call at right side.
    else return  kthSmallest(arr,si,pi-1,k);                               //pi+1>k to next smallest are present at left of pivot.
}


int main(){
 int arr[]={5,18,20,7,60,31,4,-8};
 int n=sizeof(arr)/sizeof(arr[0]);
 int stIdx=0;
 int endIdx=n-1;
 for(int ele:arr) cout<<ele<<" ";
 cout<<endl;

int k=4;            //4th smallest element.
//After sorting the array.
cout<< kthSmallest(arr,stIdx,endIdx,k);
}