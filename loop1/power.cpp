//two number are entered through the keyboard . write a program to find th evalue of
//one number raised to the power of another.(only for positive number)
# include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int b;
    cout<<"Enter power: "<<endl;
    cin>>b;
    float power = 1;
    bool flag = true; // true mean power is positive
    if(b<0){
    flag = false;//false means negative power
        b = - b;
    }
    for(int i=1 ; i<=b;i++){
        power*=a;
    }
    if(flag==false){
        power = 1/power;
        b= -b;
    }
    if(a==0 && b==0) cout<<"Not defined";
    else cout<<a<<"raise to power "<<b<<"is "<<power;
}
