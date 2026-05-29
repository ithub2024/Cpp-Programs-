# include<iostream>
using namespace std;
class A{
private:
    int A_ka_private;
protected:
    int A_ka_protected;
public: 
    int A_ka_public;
    A(){
        cout<<"A ka constructor call hua \n";
    }
};
class B: protected A{  //  A_ka_protected , A_ka_public as protected
public:
   int B_ka_public;
   B(){
    cout<<"B ka constructor call hua \n";
   }
};
class C : protected B { //(multilevel inheritance ) B_ka_public as public , A_ka_public and A_ka_procted as protected 
    public:
    int C_ka_public; 
     C(){
    cout<<"C ka constructor call hua \n";
   }
};
int main(){
  C c;  // make object and check kis kis ka constructor call hua h 

}