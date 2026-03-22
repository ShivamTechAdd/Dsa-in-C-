#include<iostream>
using namespace std;
class Student{    //user defined data type.
public:
    string name;
    int rno;
    float marks;
    Student(string name,int rno,float marks){
        (*this).name=name;   // this is a pointer like ptr.
        this->rno=rno;
        this->marks=marks;
    }
};
void changeName(Student* s1){
    // (*s1).name="shivam";
        s1->name="shivam";
}
int main(){
    Student s1("Adarsh",10,65.8);
    // s1.name="Adarsh";
    // s1.rno=10;
    // s1.marks=98.8;
    cout<<s1.name<<endl;
    Student *ptr=&s1;
    (*ptr).name="Shiavm";
    ptr->rno=54;  //Alternate method of dereferece operator.
    ptr->marks=88.4;
    cout<<s1.name<<endl;
    cout<<s1.rno<<endl;
    cout<<s1.marks<<endl;
    changeName(&s1);

    Student* s2=new Student("Ankit",150,38.0);
    cout<<s2->name<<endl;
}