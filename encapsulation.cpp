#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    void setname(string n){name  = n;}
    string getname(){return name;}
    void setage(int a){
        if(a>0) age  =a;
    }
    int getage(){return age;}
};
int main(){
    Student s1;
    Student s2;
    s1.setname("Ananya Yadav");
    s1.setage(24);
    s2.setname("Anushka Yadav");
    s2.setage(23);
    cout<<s1.getname()<<"  is  "<<s1.getage()<<"years old  "<<endl;
        cout<<s2.getname()<<"  is  "<<s2.getage()<<"years old  ";
    return 0;
}