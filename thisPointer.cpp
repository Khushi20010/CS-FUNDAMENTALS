#include<iostream>
using namespace std;
class Car{
    private:
    string brand;
    int speed;
    public:
    Car(string brand , int speed){
        this-> brand =brand;
        this->speed = speed;
    }
    void show(){
        cout<<"the brand of car is:  "<<this->brand<<"  and the speed of the car is:   "<<this->speed<<"km/hr\n";  
    }

};
int main(){
    Car c1("BMW" , 890);
    c1.show();
    Car c2("ndjh" , 989);
    c2.show();
    return 0;
}