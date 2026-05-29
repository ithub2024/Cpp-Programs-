# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    int b;
    cout<<"Enter the second number: ";
    cin>>b;
    int q = a/b;
    float rem = (a-(b*q)); // gives remainder
    // int r = a % b ; also give remainder 
    // % gives remainder directly           
    cout<<"Remainder : "<<rem<<endl; 
}