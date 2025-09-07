#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    Student(){
        name = "unknown";
        age = 0;
    }
    Student(string n  ){
        name = n;
        age = 0;
    }
    Student(string n , int a ){
        name = n;
        age = a;
    }
    void display(){
cout<<"name is"<<name<<"  and age is"<<age<<endl;
    }
};
int main(){
    Student s1;
    Student s2("Anushka" , 22);
    Student s3("Mishthi" , 9);
    s1.display();
      s2.display();
        s3.display();

}