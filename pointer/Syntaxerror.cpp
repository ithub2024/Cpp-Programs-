# include<iostream>
using namespace std;
// int main(){
//     int x=12,y=30;
//     int *p1 =&x,*p2=&y;
//     cout<<*p1<<endl<<*p2;
// }
                  //incorrect 
int main(){
   int x=12,y=30;
   int *p1 =&x,*p2=&y; //p2 is not a pointter;
   cout<<*p1<<endl<<*p2;
}