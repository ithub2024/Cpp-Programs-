# include<iostream>
using namespace std;
int main(){
    // Taking  flaot input and printing franctonal part of the number 
    float x;
    cout<<"Enter a number in fraction:  "<<endl;
    cin>>x;
    int y = (int)x;
    if(y<0) y=y-1;
    float z = (float)y;
    x=x-z;
    cout<<x;
}