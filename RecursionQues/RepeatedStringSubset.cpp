// Print subset of a string containing duplicate characters
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
void storeSubset(string ans,string original ,vector<string>&v , bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length()==1){
        if(flag==true)storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,true);
        return;// taaki neeche ki do condition na chale
    }
    char dh = original[1];
    if(ch==dh){
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,false);
    }
    else {
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,true);
    }
}
int main(){
    string str;
    cout<<"Enter String: \n";
    getline(cin,str);
    sort(str.begin(),str.end());
    vector<string>v;
    storeSubset("",str,v,true);
    int count=1;
    cout<<"Subset of String are: \n";
    for(int i=0;i<v.size();i++){
        cout<<count<<" "<<v[i]<<endl;
        count++;
    }
  
}