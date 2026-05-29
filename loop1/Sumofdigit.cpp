# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int sum = 0;
    while(n>0){
        int p = n%10;
        sum+=p;
        n/=10;
    }
    cout<<"sum of digit is:"<<sum<<endl;
}