#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

bool isCmp1(int a,int b){
    return a>b;
}

bool isCmp2(pair<int,int> p1,pair<int,int> p2){
    if(p1.first==p2.first){
        return p1.second > p2.second; //true/false;
    }
   return p1.first > p2.first;  //sort when cond is false and in case pf true as it is;
}
//method 2 using object as a function
class myCmp{
    public:
    bool operator()(int a,int b){ //oper overloading of ();
        return a>b;
    }

};
//both are same
struct myCmparator{
    public:
    bool operator()(int a,int b){ //oper overloading of ();
        return a<b;
    }
};

void print(vector<int>& v){
    for(int ele: v){
        cout<<ele<<" ";
    }
    cout<<endl;
}

void print2(vector<pair<int,int>>& v){
    for(auto ele: v){
        cout<<"("<<ele.first<<","<<ele.second<<")"<<" , ";
    }
    cout<<endl;
}

int main(){
    vector<int> v={3,9,3,5,1,4};
    sort(v.begin(),v.end()); //defoult increasing order;
    print(v);
    sort(v.begin(),v.end(),isCmp1); //decreasing order; //fun pointer
    print(v);

    vector<pair<int,int>> vp={{2,3},{2,4},{3,1}}; //based on first and when first=second then sort on basis of second;
    sort(vp.begin(),vp.end());
    print2(vp);
    sort(vp.begin(),vp.end(),isCmp2);
    print2(vp);

    //method 2 using functors

    vector<int> v1={10,90,33,55,71,14};
    sort(begin(v1),end(v1),myCmp()); //functor ke through;
    print(v1);

    sort(begin(v1),end(v1),myCmparator()); //functor ke through;
    print(v1);

    
    //method 3 using lambda exp
    
    vector<int> v2={100,900,303,155,721,134};
    int x=2,y=5;
    // unordered_map<int> mp; 
    sort(begin(v2),end(v2),[](int a,int b){ //inside lambda defined
        return a>b;
    });
    print(v2);

    sort(begin(v2),end(v2),[x,y](int a,int b){ //capture block
        // cout<<x<<" , "<<y;
        return a>b;
    });
    print(v2);

//or

    auto myLambdaCmp=[](int a,int b){  //lambda is definde outside ;
        return a<b;
    };

    sort(begin(v2),end(v2),myLambdaCmp);
    print(v2);

}