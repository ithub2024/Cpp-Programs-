# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter Size of Vector: ";
    cin>>n;
    cout<<"Enter your vector: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}