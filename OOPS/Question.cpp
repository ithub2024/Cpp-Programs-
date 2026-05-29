// Create a class "Cricket "that contains name of cricketer his age ,number of test of matches that he has palyed 
// and the average runs that he has played and the average runs that he has scored in each test match.Create an 
// array of data "Cricket"to hold records of 20 such cricketers and then write a programs to these records
# include<iostream>
using namespace std;
class Cricket{
    public:
    int age ;
    int noOfTestMatches;
    string name;  // here we are making only for 2 player
    int averageScore;
};
int main(){
Cricket virat ,Dhoni;
virat.name = "Virat";
virat.age = 35;
virat.averageScore = 150;
virat.noOfTestMatches = 100;

Dhoni.name = "Dhoni";
Dhoni.age = 45;
Dhoni.averageScore = 200;
Dhoni.noOfTestMatches = 150;

Cricket cricket [2] = {virat,Dhoni}; ///Array creation
for(int i=0 ; i<2; i++){
    cout<<cricket[i].name<<endl;
    cout<<cricket[i].age<<endl;
    cout<<cricket[i].noOfTestMatches<<endl;
    cout<<cricket[i].averageScore<<endl;  
}

}