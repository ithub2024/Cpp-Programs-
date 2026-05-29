# include<iostream>
using namespace std;
int main(){
    int p =1857;
    int *ptr = &p;
    cout<<ptr<<endl;;
    ptr+=1;
    cout<<ptr;
}
