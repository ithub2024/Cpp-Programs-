# include<iostream>
using namespace std;
int main(){
    cout<<"First number:"<<endl;
    int n;
    cin>>n;
    cout<<"Second number:"<<endl;
    int m;
    cin>>m;
    cout<<"Third number:"<<endl;
    int o;
    cin>>o;
    if(n>m && n>o){
        cout<<n<<"is the greatest number"<<endl;
    }
    if(m>n&&m>o){
        cout<<m<<"is the gratest number"<<endl;
    }
    if(o>n&&o>m){
        cout<<o<<"is the greastest number"<<endl;
    }
    
}