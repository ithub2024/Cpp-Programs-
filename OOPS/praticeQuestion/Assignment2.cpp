# include<iostream>
using namespace std;
class Student {
private:
    int Roll_no;
    string Department;
    string Name;
    string Course;
    int year_of_joining;
    public:
Student(int Roll_no, string Name , string Department, string Course, int year_of_joining){
    this->Roll_no = Roll_no;
    this->Department = Department;
    this->Course =Course;
    this->year_of_joining = year_of_joining;
}

void checkDepartment(const Student& other) const{
    if(Department == other.Department){
        cout<<"found equal";
    }
        else{
        cout<<"Not found equal";
        }
    }

};
int main(){
    //Student(int Roll_no, string Name , string Department, string Course, int year_of_joining)
    Student s1(1,"Amitabh","B.tech","Computer_Science",2000);
    Student s2(2,"Aman","BCA","Computer Application",2021);
    Student s3(3,"Amit","B.tech","Computer_Science",2004);
    s1.checkDepartment(s3);
}