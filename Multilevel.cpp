#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void setPersondetails(string n , int a){
        name = n;
        age = a;
    }
    void displayPerson(){
        cout<<"Person Name"<<name<<"and age"<<age<<endl;
    }
};
class Student:public Person{
    public:
    string College;
    void setStudentdetails(string c){
        College = c;
    }
     void displayStudent(){
        displayPerson();
        cout<<"College Name"<<College<<endl;
    }

};
class Graduate:public Student{
    public:
    string graduationDetails;
    void setSGraduationdetails(string gra){
        graduationDetails = gra;
    }
     void displayGraduate(){
        displayStudent();
        cout<<"Graduation details"<< graduationDetails<<endl;
    }

};
int main(){
    Graduate g1;
    g1.setPersondetails("Anushka Yadav" , 23);
      g1.setStudentdetails("BIET JHANSI B.Tech from Ece");
    g1.setSGraduationdetails("Graduation willl be in 2026");
  
    cout<<"Graduation details"<<endl;
    g1.displayGraduate();
    return 0;

}
