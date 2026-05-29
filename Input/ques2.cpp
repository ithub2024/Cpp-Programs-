# include<iostream>
using namespace std;
int main(){
    int i =2 , j= 3 , k ,l ;
    float a,b;
    k = i / j *j; //0
    l = j / i * i; //2
    a = i / j * j ;//1.8 is wrong value bcoz it will calculate as interzer and store as float 
    b = j / i * i;//3.0
    cout<<k<<" "<<l<<" "<<a<<" "<<b<<endl; 
}