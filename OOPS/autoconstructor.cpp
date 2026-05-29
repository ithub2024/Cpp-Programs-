// This program is programed to prove that when we create an object constructor is 
//automatically called and run this program and see
# include<iostream>
using namespace std;
class Bike{
    public:
        int price;
        int tyerSize;
        int engineSize;
    Bike(){          // constructor 
        cout<<"Constructor is called: "<<endl;
    }
};
int main(){
    Bike b1; // object creation  / constructor call
   
}