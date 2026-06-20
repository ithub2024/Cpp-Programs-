# include <iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    cout<<n<<endl;
    print(n-1);
}
int main () {
    int m;
    cout<<"Enter a number: ";
    cin>>m;
    cout<<"Number are: "<<endl;
    print(m);

}