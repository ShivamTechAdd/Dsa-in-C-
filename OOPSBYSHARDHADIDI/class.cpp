#include<iostream>
using namespace std;

class Teacher{
private: 
    int salary;
public: 
    //constructor
    Teacher(string n){
        // cout<<"hi i am cons"<<endl;
        dep="cse";
        name=n;
    }

    // //copy cons custom
    // Teacher(Teacher &origObj){
    //     cout<<"Copy cons"<<endl;
    //     this->name=origObj.name;
    //     this->dep=origObj.dep;
    //     this->salary=origObj.salary;
    // }


    //properties //attributes
    string name;
    string dep;
    string sub;

    //methods //member fun
    void changeDpt(string newDep){
        dep=newDep;
    }

    void setSalary(int s){ //public method //setter
        salary=s;
    }

    int getSalary(){ //public method //getters
        return salary;
    }

};

int main(){
    Teacher t1("Adarsh");
    Teacher t2("ojha");
    // Teacher t3(t2);

    t1.name="Adarsh";
    // t1.salary=10000;
    t1.sub="dsa";
    // t1.changeDpt("Ece");
    t1.setSalary(20000);
    cout<<t1.getSalary()<<endl;
    cout<<t1.dep<<endl;

    cout<<t1.name<<endl;
    cout<<t2.name<<endl;
    // cout<<t3.name<<endl;
}