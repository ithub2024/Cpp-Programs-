# include <iostream>
using namespace std;
int main(){
    cout<<"Enter a integer: "<<endl;
    int n;
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"Enter number is divisible by 5 and 3"<<endl;
    }
    else{
        cout<<"not divisible by 5 and 3"<<endl;
    }
}

