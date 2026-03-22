#include<iostream>
using namespace std;

//using four parameters
int mazePath(int sr,int sc,int er,int ec){    //sr=starting row and ec=ending column
    //base case.
    if(sr>er || sc>ec) return 0;               //goes out of matrix.
    if(sr==er && sc==ec) return 1;             //banda reaches to destination.
    int rightWays=mazePath(sr,sc+1,er,ec);    //column increases.
    int downtWays=mazePath(sr+1,sc,er,ec);    //row increases.
    int totalWays=rightWays + downtWays;
    return totalWays;
}

//using only two parameters
int maze2(int row,int column){                      //ulta noumbering  2 1 0.
     //base case.
     if(row<1 || column<1) return 0;               //goes out of matrix.  1 based indexing.
     if(row==1 && column==1) return 1;           //banda reaches to destination.
     int rightWays=maze2(row,column-1);          //column decreases. right 3->2->1
     int downtWays=maze2(row-1,column);          //row decreases.  down   3->2->1
     int totalWays=rightWays + downtWays;
     return totalWays;
}

//print the path or posiible ways using four+1 parameter.
void printPath1(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return ;           //goes out of matrix.  
    if(sr==er && sc==ec) {               //we reached to destination than print the string.
        cout<<s<<" ";
    }             
    printPath1(sr,sc+1,er,ec,s+'R');        //right path  we add R to s string
    printPath1(sr+1,sc,er,ec,s+'D');        //down path   we add D to s string
    return;
}

//print the path or posiible ways using only two parametrs.
void printPath2(int row,int column,string s){
    if(row<1 || column<1) return ;           //goes out of matrix.  1 based indexing
    if(row==1 && column==1) {               //we reached to destination than print the string.
        cout<<s<<" ";
    }             
    printPath2(row,column-1,s+'R');        //right path  we add R to s string
    printPath2(row-1,column,s+'D');        //down path   we add D to s string
    return;
}



int main(){
    int sr;
    cout<<"Enter starting row:-";
    cin>>sr;
    int sc;
    cout<<"Enter starting column:-";
    cin>>sc;
    int er;
    cout<<"Enter ending row:-";
    cin>>er;
    int ec;
    cout<<"Enter ending column:-";
    cin>>ec;
    cout<<"The total ways to reach destination is:-"<<mazePath(sr,sc,er,ec)<<endl<<endl;

    cout<<"The ways are using five parameter is:-";
    printPath1(sr,sc,er,ec," ");
    cout<<endl<<endl;

    int row;
    cout<<"Enter starting row in reverse indexing :-";      //starting row reverse indexing.
    cin>>row;

    int column;
    cout<<"Enter starting column in reverse indexing :-";   //starting column  reverse indexing.
    cin>>column;
    cout<<"The total ways to reach destination using two parameter is:-"<<maze2(row,column)<<endl<<endl;

    
    cout<<"The ways are using two parameter is:-";
    printPath2(row,column," ");
    cout<<endl<<endl;
}