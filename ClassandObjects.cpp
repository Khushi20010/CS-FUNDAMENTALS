#include<iostream>
using namespace std;
class Vehicle{
    private:
    string brand;
    int speed;
    public:
Vehicle(string b , int s){
    brand = b;
    speed = s;
   
}
 string getbrand(){return brand;}
    int getspeed(){return speed;}

};
class Car: public Vehicle{
    public:
    Car(string b , int s):Vehicle(b , s){ }
    void show(){
        cout<<"the brand of car is:  "<<getbrand()<<"  and the speed of the car is  "<<getspeed()<<"km/hr\n";   
    }
};
int main(){
    Car c1("BMW" ,  847847);
    c1.show();
    Car c2("Toyota" , 45454);
    c2.show();
    Car c3("Suzuki" ,499483);
    c3.show();
    return 0;
}