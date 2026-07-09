# include<iostream>
using namespace std;
string countAndSay(int n){
    if(n==1)  return "1";
    string str = countAndSay(n-1);
    // str 3322251   --> 23321511
    string ztr ="";     //23321511
    int freq = 1;
    char ch = str[0]; //ch=1
    for(int i=1; i<str.length();i++){
        char dh = str[i]; //dh =1
        if(ch==dh){
            freq++;
        }
        else { // ch! = dh
            ztr += (to_string(freq)+ch);
            freq =1;
            ch =dh;
        }
    }
    ztr = (to_string(freq)+ch);
    return ztr;

}
int main(){
    int p = 12;
    string str = countAndSay(p); 
    cout<<"Output is: "<<str;
}