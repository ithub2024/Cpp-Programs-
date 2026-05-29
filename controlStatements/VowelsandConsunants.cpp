# include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character;"<<endl;
    cin>>ch;
    int a = int (ch); //TypeCasting
    if((a >= 97 && a<= 122)||(a >=65 && a<= 90)){
        if(ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
            cout<<"vowels";
        }
        else{
            cout<<"Consunants"<<endl;
        }
    }
    else{
        cout<<"Enter character is not alphabet";
    }

}