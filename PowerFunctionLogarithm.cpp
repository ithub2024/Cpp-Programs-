# include<iostream>
using namespace std;
int pow(int x, int n){
    if(n==1) return x;
    if(n==0) return 1;
    return x * pow(x,n-1);
}

// int pows(int x ,int n){
//    cout<<"Namsate";
//     int ans =  pows(x,n/2);
                                                                              
//     if(n%2==0) return ans*ans;
//     else return ans * ans *x;

// }
int main(){
    int b;
    cout<<"Enter base: ";
    cin>>b;
    int i;
    cout<<"Enter Index: ";
    cin>>i;
    cout<<b<<" to power "<<i<<" is "<<pow(b,i);
}