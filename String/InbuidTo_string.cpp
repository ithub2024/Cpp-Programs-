// return the total number of digit in a number without using any loop
# include<iostream>
# include<string>
using namespace std;
int main(){
    int x = 12345 ;
    string s = to_string(x);
    cout<<s<<endl;
    cout<<s.size();
}