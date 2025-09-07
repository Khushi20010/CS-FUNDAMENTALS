#include<iostream>
using namespace std;
class Math{
    public:
    int add(int a , int b){
        return a+b;
    }
     double add(double a , double b){
        return a+b;
    }


};
int main(){
    Math m1;
    cout<<"Sum of integers are "<<m1.add(637 ,73873)<<endl;
       cout<<"Sum of integers are "<<m1.add(879.878 ,8989.788)<<endl;
}