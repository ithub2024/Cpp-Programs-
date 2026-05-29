# include<iostream>
using namespace std;
class Vechical{  //abstract class
    public:
        int TyerSize;
        int engineSize;
    virtual void calculateMileage() = 0; //pure virtual class and this must present in child class 
    virtual void refule () = 0; //if this pure class is not present in child clas then it will not run
};
class Bike:public Vechical{ //Since Vechical ka virtual class h or Bike Vechical class ko
    //inherit kr raha tho iska bhi function virtual ho jaye ga bina virtual banaye  
    public:
        void calculateMileage(){
        cout<<"Show Mileage\n";
}
        void refule(){
            cout<<"Show refule\n";
        }
};
class C{
    public:
        void show(){
        cout<<"C ka show h";
}
};
int main(){
 //Vechical v; // we can't create object for Abstract class
Bike b;
b.calculateMileage();
b.refule();
}
// sare inherit clas virtual ho jate h yahi unka parent class sa koi function virtual
// h tho 