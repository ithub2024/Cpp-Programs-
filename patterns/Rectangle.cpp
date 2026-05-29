# include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no rows: ";
    cin>>m;
    cout<<"Enter no column: ";
    cin>>n;
    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}