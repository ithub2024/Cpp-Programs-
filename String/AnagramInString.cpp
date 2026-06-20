# include<iostream>
# include<algorithm>
using namespace std;
int main(){
    cout<<"Enter Your String: "<<endl;
    string s;
    string t;
    getline(cin,s);
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)cout<<"Enter string are anagram";
    else cout<<"Enter strring is not anagram";
}