#include<iostream>
using namespace std;

class Bike{
    public:
    int tyre_size;
    string tyre_color;
    Bike(){            //constructors return type is same as type of class.
        cout<<"Constructor call hua"<<endl; //destructor calls when object goes out of scope.
    }
    //destructor
    ~Bike(){   //tilda 
        cout<<"Destrurctor is callled"<<endl;
    }
    Bike(int tyre_size,string tyre_color){
        this->tyre_size=tyre_size;
        this->tyre_color=tyre_color;
    }

};


int main(){
    Bike tvs;   //object creation //constructor call.
    Bike hoda;
    Bike royalEnfield(15,"Red");
    cout<<royalEnfield.tyre_size<<endl;
    cout<<royalEnfield.tyre_color<<endl;
}