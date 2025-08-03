#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    int age;
    float gpa;

};

int main(){
    Student s1 , s2;
    s1.name = "Anushka Yadav";
    // s1.rno = 12;
    cout<<"enter roll number:";
    cin>>s1.rno;
    s1.age = 22;
    s1.gpa = 8.85;
  
    s2.name = "Himanshu Yadav";
    s2.rno = 22;
    s2.age = 12;
    s2.gpa = 6.85;
    cout<<s1.name<<" "<<s1.age<<" "<<s1.rno<<" "<<s1.gpa<<endl;
        cout<<s2.name<<" "<<s2.age<<" "<<s2.rno<<" "<<s2.gpa;
}