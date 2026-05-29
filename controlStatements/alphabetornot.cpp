# include <iostream>
using namespace std;
int main(){
    cout<<"Enter a character:"<<endl;
    char ch;
    cin>>ch;
    int p = (int)ch;
    if((p>=97&&p<=112)||(p>=65&&p<=90)){
        cout<<"Enter character is  alphabet:"<<endl;
    }
    else{
        cout<<"It is character:"<<endl;
    }
}