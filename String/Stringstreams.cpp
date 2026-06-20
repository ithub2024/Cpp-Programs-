# include<iostream>
# include <string>
# include <sstream>
using namespace std;
int main(){
    string s ;//= "Amitabh a cse branch student";
    cout<<"Enter string: "<<endl;
    getline(cin,s);
    stringstream str (s);
    string temp;
    while(str>>temp){ // yaha temp ss se input le raha h
        cout<<temp<<endl;
    }
}
