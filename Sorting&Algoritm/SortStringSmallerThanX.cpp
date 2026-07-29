// Fix it
# include<iostream>
# include<string>
# include<algorithm>
using namespace std;
int main(){
    string s = "AZYZXBYDXJK";
    string str ="";
     for(int i=0;i<s.size();i++){
         if(s[i] >= 'X'){
             str.push_back(s[i]);
         }
     }
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size()-i;j++){
            if(str[j]>str[j+1]){
               // string temp = str[j];
                str[j] = str[j+1];
               // str[j]= temp;
      }     
    }
      
    }
    // sort(str.begin(),str.end());
    cout<<str;
}