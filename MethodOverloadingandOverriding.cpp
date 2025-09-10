#include<iostream>
using namespace std;
class Shape{
    public:
    void area (int side){
        cout<<"area of aquare  "<<side*side<<endl;
    }
    void area(int l , int b){
        cout<<"area of rectangle  "<<l*b<<endl;
    }
    virtual void display(){
        cout<<"this is a shape"<<endl;
    }
};
class Circle:public Shape{
    public:
    void display() override{
        cout<<"this is a circle"<<endl;
    }
    void area(double r){
        cout<<"area of  a circle  "<<3.14*r*r<<endl;
    }

};
int main(){
    Shape s1;
    s1.area(77);
    s1.area(67,89);
    s1.display();
    Circle c1;
    c1.display();
    c1.area(7887);
    return 0;
}