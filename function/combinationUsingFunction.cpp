# include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int ncr = fact(n)/(fact (r) * fact(n-r));
    return ncr;
}
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    int r;
    cout<<"Enter r:";
    cin>>r;
     int nfact =fact(n);
     int rfact = fact(r);
     int nrfact = combination(n,r);
     cout<<nrfact;
}
