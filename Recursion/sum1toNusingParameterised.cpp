#  include <iostream>
using namespace std;
void sum1toN(int sum , int n){
    if(n==0){
        cout<<sum<<endl;
        return ;
    }
    sum1toN(sum+n,n-1);
}
int main(){
    int n;
    cout<<"Enter first number: ";
    cin>>n;

    int m;
    cout<<"Enter last number: ";
    cin>>m;
    
    sum1toN(n,m);
}