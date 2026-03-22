#include<iostream>
using namespace std;

class Bike{
    public:
    static int noOfBikes;       //this belongs to a class not to object.
    int tyre_size;
    string tyre_color;
    Bike(){           
        cout<<"Constructor call hua"<<endl; 
    }
 
    Bike(int tyre_size,string tyre_color){
        this->tyre_size=tyre_size;
        this->tyre_color=tyre_color;
    }
   

};
void print(){
   static int b=10;
    cout<<b<<endl;
    b++;
}


int main(){
    print();
    print();
    print();
    Bike tvs;   //object creation //constructor call.
    Bike hoda;
    Bike royalEnfield(15,"Red");
    Bike::noOfBikes=10;
  
    cout<<royalEnfield.tyre_size<<endl;
    cout<<royalEnfield.tyre_color<<endl;
}