# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int lastdigit;
    int reverse = 0;
    while(n>0){
        lastdigit = n%10;
        reverse*=10;
        reverse += lastdigit;
        n/=10;

    }
    cout<<"reverse number is:"<<reverse<<endl;
}