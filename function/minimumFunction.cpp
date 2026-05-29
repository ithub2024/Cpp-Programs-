// complete it
# include<iostream>
using namespace std;
int mini(int x, int y){
 int a;
 if(x<y) a=x;
 else a=y;
 cout<<a;
return a;
}
int main(){
mini(156,187);
int x,y;     //this  x,y is diffrent from void mini function wala x,y 
cin>>x>>y;
cout<<"Smallest value: "<<min(x,y)<<" ";
mini(2004,5002);
 
}