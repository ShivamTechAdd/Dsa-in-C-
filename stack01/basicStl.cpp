#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    //printing in revese order.
//    while(st.size()>0){
//         cout<<st.top()<<" ";
//         st.pop();
//     } 

    //Another method using extra space.
    stack<int> rt;
    while(st.size()>0){
    cout<<st.top()<<" ";
    // int x=st.top();
    // st.pop();
    // rt.push(x);
    rt.push(st.top());
    st.pop();
    }
    cout<<endl;
    //putting back element of rt into st
    while(rt.size()>0){
    st.push(rt.top());
    rt.pop();
    }
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;

    cout<<endl<<endl;
      //printing in normal order using 3 stack.
    stack<int>a;
    stack<int>b;
    stack<int>c;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);

    while(a.size()>0){
        b.push(a.top());
        a.pop();
    }
    while(b.size()>0){
        c.push(b.top());
        b.pop();
    }
    while(c.size()>0){
        a.push(c.top());
        c.pop();
    }
    //print stack a which is in normal order.
    while(a.size()>0){
       cout<<a.top()<<" ";
        a.pop();
    }
    cout<<endl<<endl<<endl;

        //printing in normal order using 2 stack.
        stack<int>d;
        stack<int>e;
        d.push(10);
        d.push(20);
        d.push(30);
        d.push(40);
        d.push(50);

        while(d.size()>0){
            e.push(d.top());
            d.pop();
        }
        while(e.size()>0){
           cout<<e.top()<<" ";
           d.push(e.top());
           e.pop();
        }
       cout<<endl;
       cout<<d.size()<<endl;

}