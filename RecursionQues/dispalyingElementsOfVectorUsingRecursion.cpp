# include<iostream>
# include<vector>
using namespace std;
void display(vector<int>&ans ,int idx){
    if(idx == ans.size()) return ;
    cout<<ans[idx]<<" ";
    display(ans,idx+1);
}
int main(){
    vector<int>orgs;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        orgs.push_back(p);
    }
    display(orgs,0);
}