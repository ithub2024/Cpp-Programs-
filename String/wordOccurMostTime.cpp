# include<iostream>
# include<string>
# include<vector>
# include<algorithm>
# include<sstream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: "<<endl;
    getline(cin,s);
    stringstream ss (s);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    int maxCount =1;
    int count =1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1])count ++;
        else count =1;
        maxCount= max(maxCount,count);
    }
    count =1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(count == maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }
}