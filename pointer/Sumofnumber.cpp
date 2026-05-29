# include<iostream>
using namespace std;
int main(){
int x,y;
int*p1=&x;
int*p2=&y;
cout<<"Enter the first number: "<<endl;
cin>>*p1;
cout<<"Enter the second number: "<<endl;
cin>>*p2;
cout<<*p1+*p2;
}