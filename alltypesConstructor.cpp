#include<iostream>
using namespace std;
class Car{
    private:
    string brand;
    int speed;
    public:
    //deafult constructor
    Car(){
        brand = "unknown";
        speed = 0;
        cout<<"Default constructor is called \n";
    }
    //parametrized constructor
    Car(string b , int s){
        brand =b;
        speed = s;
          cout<<"the parametrized constructor is called \n";
    }
    //copy constructor
    Car(const Car&c){
brand = c.brand;
speed = c.speed;
cout<<"the copy constructor is called \n";
    }
    //deconstructor 
    ~Car(){
        cout<<"the deconstructor function is called ";
    }
    void show(){
        cout<<"the brand is:  "<<brand<<"nad the speed is:  "<<speed<<"km/hr\n";
    }




};
int main(){
    Car c1;
    c1.show();
    Car c2("toyota" , 89);
    c2.show();
       Car c3 = c2;
    c3.show();
     

}