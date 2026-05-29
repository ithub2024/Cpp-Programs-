 # include <iostream>
 using namespace std; 
 int main(){

  //                //Method-1 
    // int n;
    // cout<<"enter n number:"<<endl;
    // cin>>n;
    // for(int i =1;i<=2*n-1;i+=2){
    //     cout<<i<<endl;
    // }
    //             //Method-2
    int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    int a =1;
    for(int i =1; i<=n;i++){
        cout<<a<<endl;
        a =a+2;
    }
 }