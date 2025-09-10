#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void setpersondetails(string n , int a){
        name = n;
        age = a;

    }
};
class Student:virtual public Person{
    public:
    string Collegename;
    void setStudentdetails(string coll ){
     Collegename = coll;

    }

};
class Employee:virtual public Person{
    public:
    string Companyname;
    void setEmployeetdetails(string comp ){
     Companyname = comp;

    }

};
class WorkingStudent:public Student , public Employee{
    public:
    void display(){
        cout<<"Name "<<name<<" and age "<<age<<endl;
        cout<<"Colllge Details:  "<<Collegename<<endl;
        cout<<"Company name:  "<<Companyname<<endl;
    }
};
int main(){
    WorkingStudent ws;
    ws.setpersondetails("Anushka Yadav" , 23);
    ws.setStudentdetails("College is BIET JHANSI");
    ws.setEmployeetdetails("Working as a software DEveloper in IT company");
    ws.display();
    return 0;
}