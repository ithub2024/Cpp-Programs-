# include<iostream>
using namespace std;
int b = 500;  // here you can use ststic keywords
int main(){
    int b = 1000;
    cout<<b<<endl;
    cout<<::b;
} 