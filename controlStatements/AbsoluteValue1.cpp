# include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number: "<<endl;
    int p;
    cin>>p;
    if(p<0){
        p = -p;
    }
    cout<<p; //yadi p ka value negative hua tho update ho kr print hoye gi 
}