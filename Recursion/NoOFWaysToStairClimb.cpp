# include<iostream>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1) + stair(n-2);
}
int main(){
int n ;
cout<<"Enter total number of stairs: ";
cin>>n;
cout<<"\nTotal number ways to reach at top by 1 or 2 jumps is: "<<stair(n);
}
