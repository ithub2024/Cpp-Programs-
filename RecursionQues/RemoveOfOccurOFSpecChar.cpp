//                     using loop 
// # include <iostream>
// # include <string>
// using namespace std;
// int main(){
//     string str ;
//     cout<<"Enter your String ";
//     getline(cin,str);
//     string sh ;
//     char p;
//     cout<<"\nEnter character which is to remove: "<<endl;
//     cin>>p;
//     for(int i=0 ;i<str.length() ;i++){
//         if(str[i]!=p) sh+= str[i]; 
//     }
//     cout<<"After removing "<<sh<<p<<"String is: "<<sh;
// }

//                 using recursion

// # include <iostream>
// # include <string>
// # include<algorithm>
// using namespace std;
// void removeChar(string ans , string original , char a){
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = original [0];
//     if(ch==a) removeChar(ans , original.substr(1),a);
//     else removeChar(ans+ch,original.substr(1),a );
// }
// int main(){
//     string str;
//     cout<<"Enter String: ";
//     getline(cin,str);
//     char a;
//     cout<<"Enter char to remove ";
//     cin>>a;
//     //string str = "physics wallah";
//     cout<<endl;
//     removeChar("",str,a);
// }

// above code space complexity is not good 

# include<iostream>
# include <string>
using namespace std;
void removeChar(string ans , string original , int idx, char a){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch = original [idx];
    if(ch==a) removeChar(ans , original,idx+1,a);
    else removeChar(ans+ch,original,idx+1,a);
}
int main(){
    string str ;
    cout<<"Enter String: ";
    getline(cin,str);

    char a;
    cout<<"Enter char to remove ";
    cin>>a;

    //string str = "physics wallah";

    cout<<endl;
    removeChar("",str,0,a);
}