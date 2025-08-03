#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int seats;
    string  type;
    int price;
    car (string n , int s , int p , string t){
name= n; 
type = t;
seats = s;
price = p;
    }
};
int main(){
    car c1("Audi ",6,  160000000, "Hachback" );
    cout<<c1.name<<" "<<c1.seats<<" "<<c1.type<<" "<<c1.price;
}