# include<iostream>
using namespace std;
class Bike {
    public:
    int tyreSize;
    int engineSize;
    Bike(int tyreSize , int engineSize){
        this-> tyreSize = tyreSize; // ->____ this show class ka members 
        this-> engineSize = engineSize;
    }
};

int main(){
Bike tvs(12 , 100);
Bike honda(13 , 150);
Bike royalEnfields(15 , 350);
Bike luna(90 , 95);
//printing
cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
cout<<royalEnfields.tyreSize<<" "<<royalEnfields.engineSize<<endl;
cout<<luna.tyreSize<<" "<<luna.engineSize<<endl;

}