# include<iostream>
using namespace std;
class A {
int a_ka_private=10;
public:
friend void show(A &a);
};
void show(A &a){
    cout<<a.a_ka_private<<endl;
}
int main(){
    A a;
    show(acout<<s1.name<<" "<<s1.age<<" "<<s1.roll_no<<" "<<endl;);
}