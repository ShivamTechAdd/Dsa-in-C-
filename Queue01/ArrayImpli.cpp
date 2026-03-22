#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    int f;
    int r;
    //int arr[50];
    vector<int> arr;
    Queue(int val){
        f=0;
        r=0;
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
    }

    void pop(){
        if(r-f==0){   //r-f is size of current array.
            cout<<"Queue is empty."<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(r-f==0){
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(r-f==0){
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        return arr[r-1]; 
    }
    
    int size(){
        return r-f;
    }

    bool isempty(){
        if(r-f==0) return true;
        else return false;
    }
    void display(){
        if(r-f==0) return;
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