# include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int permutation(int n,int r){
    int npr = fact(n)/fact(r) ;
    return npr;
}
int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr; 
}
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    int r;
    cout<<"Enter r";
    cin>>r;
    int pfact = permutation(n,r);
    int cfact = combination(n,r);
    cout<<"Permutation "<<pfact<<"  combination "<<cfact;
}