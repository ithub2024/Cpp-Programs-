# include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;
    public:
    // void setScore(int s){
    //     cout<<"Set your score: "<<endl;
    //     score = s;
    // }
    
    int getScore(int s){
        score = s;
        return score;
    }
    // void sethealth(int h){
    //     cout<<"Set your health: "<<endl;
    //     health = h;
    // }
    int gethealth(int h){
         health = h;
        return health;
    }
};
int main(){
    Player Amitabh;
    Player Raj;
   // Amitabh.sethealth(100);
    Amitabh.getScore(90);
    Amitabh.gethealth(100);
    Raj.gethealth(100);
    Raj.getScore(50);
   // Raj.setScore(80);
    // cout<< Amitabh.gethealth()<<"  "<<Amitabh.getScore();
    // cout<<Raj.gethealth()<<"  "<<Raj.getScore();
    cout<<"Amitabh score"<<Amitabh.getScore(90)" "<<"Amitabh health"<<Amitabh.health();
    cout<<"Raj Health"<<Raj.gethealth(100)<<"Raj Score"<<Raj.getScore();
}