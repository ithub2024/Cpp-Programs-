# include<iostream>
using namespace std;
class ComplexNumber{
public:
int real;
int imaginary;
friend ComplexNumber operator +(ComplexNumber &c1 ,ComplexNumber &c2); //friend function
};
ComplexNumber operator + (ComplexNumber &c1, ComplexNumber &c2){
    ComplexNumber c3;
    c3.imaginary = c1.imaginary + c2.imaginary;
    c3.real = c1.real + c2.real;
    return c3;
}

int main(){
    ComplexNumber c1,c2;
    c1.real = 10;
    c1.imaginary = 5;
    c2.imaginary= 5;
    c2.real= 20;
    ComplexNumber c3 = c1 +c2;
    cout<<c3.real<<" "<<c3.imaginary<<endl;   
}