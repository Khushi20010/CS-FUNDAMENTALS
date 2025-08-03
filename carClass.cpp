#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
    string type;
};
void print(Car c){
    cout<<c.name<<" "<<c.seats<<" "<<c.price<<" "<<c.type;
}
int main(){
    Car c1;
    c1.name = " Honda City";
    c1.price  =1500000;
    c1.seats = 5;
    c1.type = "Seadan";
    Car c2;
    c2.name = " Suzuki swift";
    c2.price  =1600000;
    c2.seats = 6;
    c2.type = "Hachback";
    Car c3;
    c3.name = " Toyota Fortuner";
    c3.price  =2000000;
    c3.seats = 10;
    c3.type = "SUV";
    print(c1);
    print(c2);
    print(c3);
}