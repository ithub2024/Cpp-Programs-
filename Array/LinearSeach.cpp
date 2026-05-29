# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of elelment: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter number you want to Search: "<<endl;
    cin>>x;
    bool flag = false;
    for(int i = 1; i<=n-1;i++){
        if(arr[i]==x) flag= true ; 
    } 
    if (flag == true ) cout<<"Element fount ";
    else cout<<"Not found";
}