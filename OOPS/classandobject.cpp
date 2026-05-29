# include<iostream>
using namespace std;
class Player{     //class creating 
    public:       // access specifier
    int score;    // class member 
    int health;
};
int main(){
    Player amit;      //object creation
    amit.score =90;
    amit.health =100;
    cout<<"Score of amit player"<<amit.score<<endl;
    cout<<"health of amit player"<<amit.health<<endl;
    Player harsh ;
    harsh.score =100;
    harsh.health = 20;
    cout<<"Score of harsh player"<<harsh.score<<endl;
    cout<<"health of harsh  player"<<harsh.health<<endl;
}
