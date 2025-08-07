#include<iostream>
using namespace std;
class Scooty{
    public:
    int speed;
    float mileage;
    private:
    int bootSpace;

};
class Bike: public Scooty{
    public:
    int gears;
};
int main(){
    Bike b1;
    b1.gears = 6;
    b1.mileage = 89.78;
    b1.speed = 764;
   cout<<"Mileage:"<<b1.mileage<<endl;
     cout<<"Topspeed:"<<b1.speed<<endl;
       cout<<"Gears:"<<b1.gears<<endl;

}