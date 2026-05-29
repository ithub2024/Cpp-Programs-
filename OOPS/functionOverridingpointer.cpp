// function overriddig using and pointer
# include<iostream>
using namespace std;
class Vechicle{
 public:
    int tyerSize;
    int engineSize;
    int light;
    string companyName;
void show(){
    cout<<"Vechile ka show\n";
}
// void showCompanyName(){
//     cout<<"Company Name: "<< companyName;
// }
};

class Bike: public Vechicle{
    public:
    int handleSize;
    void show(){
        cout<<"Bike ka show \n";
    }

};

int main(){
    // Compiler POV: Vechicle type ka h 
    // rumTime POV: Bike ka address hai 
    Bike b;
    Vechicle *a;
    a = &b;
    a->show();


}
