//Opps concept says keep your member function private
#include<iostream>
using namespace std;
class Player {
private:
int score ;
int health ;
public:
void setscore(int s){
    cout<<"score set kiya ja raha h ";
    score = s;
}
void sethealth(int h){
    cout<<"health set kiya ja raha h ";
    health = h;
}
int getscore(){
    return score;
}
int gethealth(){
    return health;
}
};
int main(){
    Player Amitabh;
    Amitabh.setscore(100);
    Amitabh.sethealth(91);
    cout<<"Amitabh Score: "<<Amitabh.getscore()<<endl<<"Amitabh health: "<<Amitabh.gethealth()<<endl;
}