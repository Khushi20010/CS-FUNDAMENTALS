#include<iostream>
using namespace std;
class Basketballer{
    public:
    string name;
    int shoots;
    float avg;
    Basketballer(string n , int s , float a) {
        name = n;
        shoots =s;
        avg = a;
    }
};
int main(){
Basketballer c1("Anushka Yadav" ,56, 6.98 );
Basketballer c2("Sneha Yadav" ,66, 7.98 );
Basketballer*p1= &c1;
cout<<(*p1).shoots<<endl;
(*p1).avg = 9.5845;
cout<<c1.avg<<endl;
}