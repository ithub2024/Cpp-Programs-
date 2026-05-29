// Correct This Code :

# include<iostream>
# include<vector>
using namespace std;
void input(vector<int>&a,int n){        // pass by reference
    for(int i=0;i<=n-1;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
}   
int main(){
    vector<int>v;
    int size = v.size();
    input(v,size);
    int max;
    for(int i=0;i<=size-2;i++){
        for(int j=1+i;j=size-1;j++){
            if(v[i]>v[j]) max = v[i];
        }
        
    }
    cout<<"Max element is: "<<max;
}
