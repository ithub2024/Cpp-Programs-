# include<iostream>
# include<string>
using namespace std;
int count = 1; 
void PintSubstring(string ans , string original){

    if(original == ""){
        cout<<count++<<" "<<ans<<endl;
        return ;
    }
    char ch = original [0];
    PintSubstring(ans,original.substr(1));
  
    PintSubstring(ans+ch,original.substr(1));
}
int main(){
string str ;
cout<<"Enter your Word: ";
getline(cin,str);
cout<<"\nNumber of its subset are: \n";  
PintSubstring("",str);
}