# include<iostream>
using namespace std;
class A{
private:
    int A_ka_private;
protected:
    int A_ka_protected;
public: 
    int A_ka_public;
    void show(){
        cout<<"Mai a ka show hu !!\n";
    }
    
};
class B: public A {   
public:
   int B_ka_public;
    void show(){
        cout<<"Aham b show Asmi!!\n"; // overriding the parent class function
    }
   
};

int main(){
  B b;
  b.show(); // not displaying class A void show
  A a;
  a.show();//  accessing the void func of class A throw A object
  b.A::show();  // throw B object still we accessing the A func by using scope resolution function 


}