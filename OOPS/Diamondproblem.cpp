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
class B: virtual public A{  // virtual se ek hi instance banta h 
public:
   int B_ka_public;
   B(){
    cout<<"B ka constructor call hua \n";
   }
};
class C: virtual public A {  // virtual se ek hi instance banta h 
    public:
    int C_ka_public; 
     C(){
    cout<<"C ka constructor call hua \n";
   }
};
class D : public B , public C {
    public:
    int D_ka_public;
    void show(){
        cout<< A_ka_public<<endl; // we can use scope resolution oprater here (::)
    }

};

int main(){
  D d; 
    d.A_ka_public = 10;
    d.show();

}