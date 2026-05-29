# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: "<<endl;
    cin>>n;
    for(int i=1;i<=n; i++){
        for(int j=1;j<=n;j++){
           // cout<<"A B C D";
           cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}