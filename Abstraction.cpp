#include<iostream>
using namespace std;
class Shapes{
    public:
    virtual void draw() = 0;
    void info(){
        cout<<"This is a  shape"<<endl;
    }
};
class Square:public Shapes{
    public:
    void draw(){
        cout<<"this is a square shape"<<endl;
    }
};
int main(){
    Square s1;
    s1.draw();
    s1.info();
    return 0;
}