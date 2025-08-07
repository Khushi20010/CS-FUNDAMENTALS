#include<iostream>
using namespace std;
class Loading{
    public:
    void sum(string a , string b){
cout<<a+b<<endl;
    }
    void sum(int a , int b){
        cout<<a+b<<endl;
    }
    void sum(int a, int b ,int c){
     cout<<a+b+c<<endl;
    }
   
    
};
int main(){
    Loading l1;
    l1.sum(2 ,3);
    l1.sum(1,1,2);
    l1.sum("Anushka" , "Yadav");
}
