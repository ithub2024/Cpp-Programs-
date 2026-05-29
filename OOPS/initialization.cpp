# include<iostream>
using namespace std;
class Student{
    public:
string name;
int age;
Student(string n , int a): name(n) , age(a){
 cout<<name<<" "<<age;
} // shortcut of constructor
};
int main(){
    Student s1("Amitabh",91);

}