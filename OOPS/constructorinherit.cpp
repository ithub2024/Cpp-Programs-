// backend in vexhile ka object banta h parent class as here for vechicle
# include<iostream>
using namespace std;
class Vechicle{
    public:
int tyerSize;
int engineSize;
int light;
string companyName;
Vechicle(){
    cout<<"Vechile ka constructor call hua h\n";
}
void showCompanyName(){
    cout<<"Company Name: "<<
}
};
// class Car: public Vechicle{
//     public:
//     int steeringSize;
// };
class Bike: public Vechicle{
    public:
    int handleSize;
    Bike(){
        cout<<"Bike ka constructor is call hua h \n";
    }

};

int main(){
    Bike honda;


}
