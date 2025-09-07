#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound() = 0;
    void info(){
        cout<<"animals makes sound"<<endl;
    }
};
class cat: public Animal{
    public:
void sound() override{
    cout<<"Cat makes sound like mew-mew"<<endl;
}
};
int main(){
  cat c1;
  c1.info();
  c1.sound();
}