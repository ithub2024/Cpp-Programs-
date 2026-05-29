# include<iostream>
using namespace std;
class Stduent{
public:
int rollNumber;
static getRollNumber(){
    return rollNumber;
}
};
int main(){
Stduent s;
s.rollNumber =101;
cout<<s.getRollNumber()<<endl;
}
// output: Error (Accesing Non-static member using static function)