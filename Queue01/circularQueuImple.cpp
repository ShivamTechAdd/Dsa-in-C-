#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    int f;
    int r;
    int s;
    int c;
    //int arr[50];
    vector<int> arr;
    Queue(int val){
        f=0;
        r=0;
        s=0;
        c=val;
        vector<int> v(val);
        arr=v;
    }
    void push(int val){
        if(r==arr.size()){
            cout<<"Queue is full."<<endl;
            return;
        }
        arr[r]=val;
        r++;
        if(c==r) r=0;
        s++;
    }

    void pop(){
        if(s==0){   
            return;
        }
        if(f==c) f=0;
        f++;
        s--;
    }
    int front(){
        if(s==0){
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(s==0){
            return -1;
        }
        return arr[r-1]; 
    }
    
    int size(){
        return s;
    }

    bool isempty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        if(s==0) return;
        for(int i=f;i<r;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
int n=20;
Queue q(n);
q.push(10);
q.push(20);
q.display();
q.push(30);
q.push(40);
q.display();
q.push(50);
q.push(60);
q.pop();
q.display();
q.pop();
q.display();
cout<<q.front()<<endl;
cout<<q.back()<<endl;
cout<<q.size()<<endl;
cout<<q.isempty()<<endl;
}