#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string n ,int r , float a){
        name = n;
        runs= r;
        avg = a;
    }
    void print(){
        cout<<name<<" "<<runs<<" "<<avg<<endl;
    }
};
int main(){
    Cricketer c1("Sachin Tedulkar" , 25000 , 55.2);
     Cricketer c2("Viart Kohli" , 20000 , 45.2);
     c1.print();
     c2.print();
}
