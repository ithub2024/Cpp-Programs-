# include<iostream>
using namespace std;
class Student{
    public:
    int rollNumber;
    int age ;
};
int main(){
    Student s1;
    Student s1 = s2;  // oprator overloading
    s1.rollNumber = 100;
    s1.age =21;
    cout<<s1.age<<" "<<s1.rollNumber;
}