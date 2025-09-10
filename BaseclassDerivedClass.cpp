#include<iostream>
using namespace std;
class Shape{
    public:
  virtual void area() = 0;
};
class Circle: public Shape{
    private:
    double radius;
    public:
    Circle(double r){
        radius  = r;
    }
    void area(){
        cout<<"area of the circle is:  "<<radius*radius*3.14<<endl;
    }

};
class Rectangle: public Shape{
    private:
    double length , width;
    public:
    Rectangle(double l , double w){
    length = l;
    width = w;
    }
    void area(){
        cout<<"area of the reactangle is:  "<<length*width<<endl;
    }

};
int main(){
    Shape* Shapeptr;
    Circle c1(7878);
    Rectangle r1(4.5,5.8896);
    Shapeptr = &c1;
    Shapeptr->area();
    Shapeptr = &r1;
    Shapeptr->area();
    return 0;


}

