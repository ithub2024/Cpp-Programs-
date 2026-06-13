# include<iostream>
# include<algorithm>
# include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<"The string is: "<<"' "<<str<<" '";
    reverse(str.begin()+2,str.begin()+6);
    cout<<"After Reverse "<<str<<endl;
}