# include<iostream>
using namespace std;
int main(){
    int n  =10;
    int*p=&n;
    int**l = &p;
    int***m=&l;99+++
    int****g=&m;
    cout<<*p<<" "<<**l<<" "<<***m<<" "<<****g;
}