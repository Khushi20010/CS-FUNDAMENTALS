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
    // ~car(){
    //     cout<<"DEconstructor "<<name<<endl;
    // }
};
int main(){
    car c1("Audi ",6,  160000000, "Hachback" );
    car c2("Maruti Suzuki", 4 , 1000000 , "Sedan" );
    car c3 = c1;
    cout<<c1.name<<" "<<c1.seats<<" "<<c1.type<<" "<<c1.price<<endl;
    cout<<c2.name<<" "<<c2.seats<<" "<<c2.type<<" "<<c2.price<<endl;
     cout<<c3.name<<" "<<c3.seats<<" "<<c3.type<<" "<<c3.price;

}