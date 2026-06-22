# include<iostream>
using namespace std;
int power(int a , int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}
    int pow(int a, int b){
        if(b==0) return 1;
        return a *pow(a,b-1);
    }
int main(){
    int a;
    cout<<"Enter base number: ";
    cin>>a;
    int b;
    cout<<"\nEnter Index number: ";
    cin>>b;
    cout<<"\nBase to Index is "<<pow(a,b);
}