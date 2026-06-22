# include<iostream>
using namespace std;
int sum2(int n){
    if(n==0) return 0 ;
    return n+sum2(n-1);
}
int main(){
    int n;
    cout<<"Enter upto sum you want: ";
    cin>>n;
    cout<<sum2(n);
}