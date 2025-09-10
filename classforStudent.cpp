#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int Rollnumber;
    float marks;
    public:
    void setRollnumber(int r){
        Rollnumber = r;
    }
    int getRollnumber(){
        
        return Rollnumber;
    }
     void setname(string  n){
        name = n;
    }
    string  getname(){
        return name;
    }
     void setmarks(float m){
        marks  = m;
    }
    float getmarks(){
        return marks;
    }


};
int main(){
    Student s1;
    s1.setmarks(89);
    s1.setname("Ananya Yadav");
    s1.setRollnumber(12);
    cout<<"Nmae of the student  "<<s1.getname()<<" marks of the student  "<<s1.getmarks()<<" roll number of the student  "<<s1.getRollnumber()<<endl;
    return 0;
}