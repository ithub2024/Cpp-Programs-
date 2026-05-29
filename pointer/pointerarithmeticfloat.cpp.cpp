# include<iostream>
using namespace std;
int main(){
    float p =1857.78;
    float *ptr = &p;
    cout<<ptr<<endl;
    ptr+=1;
    cout<<ptr;
}
