# include<iostream>
# include<string>
using namespace std;
string isPalindrome(string s , int i ,int j){
    if(i>j) return "Palindrome";
    if(s[i]!=s[j]) return "not Palindrome";
    else return isPalindrome(s,i+1,j-1);
}
int main(){
    string s;
    cout<<"Enter string to be checked as Palindrome: ";
    getline(cin,s);
    cout<<isPalindrome(s,0,s.length()-1);
}