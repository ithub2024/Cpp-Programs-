# include<iostream>
using namespace std;
class Player{
    public:
    int score = 100;  //default value
    int health = 50;   //default value
    void ShowHealth(){
        cout<<"Health is: "<<health<<endl;
    }
    void showscore(){
        cout<<"score: "<<score;
    }
};
int main(){
Player harsh;
harsh.health=70;
harsh.score = 50;
harsh.ShowHealth();
harsh.showscore();
}