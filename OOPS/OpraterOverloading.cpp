# include <iostream>
using namespace std;
class ComplexNumber{
    public:
    int real ;
    int imaginary;
    ComplexNumber operator + (ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this-> real;
        return c3;
    }
};
int main(){
    ComplexNumber a1,a2;
    a1.imaginary = 10;
    a1.real  = 5;
    a2.imaginary = 2;
    a2.real = 3;
    ComplexNumber a3 = a1 + a2;
    cout<<"real: "<<a3.real<<" "<<"Imaginary: "<<a3.imaginary<<endl;
}