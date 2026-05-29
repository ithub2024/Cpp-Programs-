# include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int product  =1; //additive identity 
    for(int i = 1;i<=n;i++){
        product *=i;
    }
    cout<<"The factorial of given number is: "<<product<<endl;
}