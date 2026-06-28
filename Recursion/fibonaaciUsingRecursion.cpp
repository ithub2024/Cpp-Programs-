# include <iostream>
using namespace std;
int fibo (int n){
    if(n==1 || n==2) return 1;
     return fibo(n-1)+fibo(n-2);
    // we can also do this 
    // int LeftAns = fibo(n-1);
    // int RightAns = fibo(n-2);
    // return LeftAns + RightAns;
}

int main(){
    int p;
    cout<<"which team of series you want to seach: ";
    cin>>p;
    cout<<p<<" th term of fibonaaci series: "<<fibo(p);
}
