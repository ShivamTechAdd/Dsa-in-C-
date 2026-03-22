#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//custom comparator
// bool compare(int x,int y){
//     return x<y;  //if this true the x is picked else y is picked;
// }

bool cmp(pair<int,int> &p1,pair<int,int> &p2){
    //pair<int,int> first=value, second=weight;
    double r1=(p1.first*1.0)/(p2.second*1.0); //for p1 value by weight ratio;
    double r2=(p2.first*1.0)/(p1.second*1.0);  //for p2 value by weight ratio;
    return r1 > r2; //if r1>r2 true then r1 is picked else r2 is picked;
}

double fractionalKnapsack(vector<int>& profit,vector<int>& weights,int n,int w){
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        arr.push_back({profit[i],weights[i]});
    }
    sort(arr.begin(),arr.end(),cmp); //custom comparator;
    double maxProfit=0;
    for(int i=0;i<n;i++){ //no of items traverse over vector;
        if(arr[i].second<=w){
            //pick kerenge;
            maxProfit += arr[i].first;
            w -= arr[i].second;
        }else{
            //partialy pick kerenge;
            maxProfit += ((arr[i].first*1.0)/(arr[i].second*1.0))*w; //value/weight*remaining capacity;
            w=0;
            break;
        }
    }
    return maxProfit;
}
//tc=O(log(n));
//sc=O(sorting algo);

int main(){
vector<int>profit={60,100,120};
vector<int>weights={10,20,30};
int w=50; //knapsack
int n=3; //no of items
cout<<fractionalKnapsack(profit,weights,n,w)<<"\n";
return 0;
}