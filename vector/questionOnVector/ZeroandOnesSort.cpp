# include<iostream>
# include<vector>
# include<algorithm> // import algorithm file to use sort keyword
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n; 
    for(int i=0;i<=n-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
   sort(v.begin(),v.end());   // in build function 
    for(int i=0;i<=n-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}