#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
//count of set bit 
//brain kergenis algo.
int count_set_bits(int n){   //n=22
    int count =0;
    while(n>0){
        n=(n & (n-1));     //n= 22 & 21 ; n=16  n=16 & 15 n= 0 and so on till n>0;
        count++;
    }
    return count;
}

int min_flip_of_bits(int x,int y){
    int temp= x ^ y;  //so this will give all 1 s where bits are diff in x and y.
    int result=count_set_bits(temp);
    return result;
}

int main(){
    int x;
    cout<<"Enter a noumber:-";
    cin>>x;
    int y;
    cout<<"Enter a noumber:-";
    cin>>y;
    cout<<min_flip_of_bits(x,y);
}