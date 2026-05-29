# include<iostream>
using namespace std;
class Gun{
public:
    private:
    int ammo;
    int damage;
    int scope;
};
class Player{
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
public:
int getHealth(){
    return health;
}
int getAge(){
    return age;
}
int getScore(){
    return score;
}
int isAlive(){
    return alive;
}
Gun getGun(){
    return gun;
}
};