# include<iostream>
using namespace std;
class Bike{
    public:
    static int noOfBikes;
    int tyerSize;
    int engineSize;
    Bike (int tyerSize , int engineSize ){
        this->tyerSize = tyerSize;
        this->engineSize = engineSize;
    }
    static void increseNoOfBikes(){
    noOfBikes++;
}
};
int Bike::noOfBikes = 12;  // ye ek baar define hota h aur sare object k liye same hota h

int main(){
Bike royalEnfield(15,350);
Bike bajaj(13,87);

cout<<royalEnfield.noOfBikes<<endl;  // increase all bike number even it is call by royalEnfiled
cout<<bajaj.noOfBikes<<endl; //increase all  bike number even it is call by bajaj

Bike::increseNoOfBikes();
cout<<royalEnfield.noOfBikes<<endl;
cout<<bajaj.noOfBikes<<endl;

}
