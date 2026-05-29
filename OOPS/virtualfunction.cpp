# include<iostream>
using namespace std;
class Vechical{
    public:
        virtual void show(){
        cout<<" Vechical ka show";
}
};
class Bike:public Vechical{ //Since Vechical ka virtual class h or Bike Vechical class ko
    //inherit kr raha tho iska bhi function virtual ho jaye ga bina virtual banaye  
    public:
        void show(){
        cout<<"Bike ka show";
}
};
class C{
    public:
        void show(){
        cout<<"C ka show h";
}
};
int main(){
C c;
c.show(); // isliye c ka show call hua h
cout<<endl;
cout<<sizeof(Vechical)<<endl;;
cout<<sizeof(Bike)<<endl;
cout<<sizeof(C)<<endl;
}
// sare inherit clas virtual ho jate h yahi unka parent class sa koi function virtual
// h tho 