#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;
    Student(string s  , int r, float g){
name =s;
rno =r;
gpa = g;
    }

};
int main(){
    Student s1("Anushka Yadav" , 76 , 8.2);
     Student s2("Anuj Kumar Yadav" , 16 , 9.2);
    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno;
}
