//                          This code is not good as per Time & Space Complexity
# include<iostream>
# include<vector>
# include<string>
using namespace std;

void permutaion(vector<string>&v , string ans , string original ){
    if(original ==""){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch =original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutaion(v,ans+ch,left+right);
    
    }
}
string getpermutation(int n , int k){
    string str ="";
    for(int i=1;i<=n;i++){
        str+=to_string(i);
    }
}
int main(){
int n;
cout<<"Enter number: ";
cin>>n;
int k;
cout<<"\nEnter Position: ";
cin>>k;
string prin = getpermutation(n,k);
}