#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void Sound(){
        cout<<"Animal makes sound"<<endl;
    }
};
class Dog : public Animal{
    public:
    void sound(){
        cout<<"Dog Barks"<<endl;
    }
};
int main(){
    Animal *a;
    Dog d;
    a=&d;
    a->Sound();
    return 0;

}