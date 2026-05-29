# include<iostream>
# include<vector>
using namespace std;
int main(){
vector<int>vr(5);
cout<<"Enter your vector: ";
for(int i=0;i<5;i++){
    cin>>vr[i];
}
cout<<"\nEnter vector is: ";
for(int i=0;i<5;i++){
    cout<<vr[i]<<" "; 
}
}