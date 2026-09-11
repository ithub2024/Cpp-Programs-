// complete it main part 

# include<iostream>
# include<vector>
using namespace  std;
vector<int>productExceptsSelf(vector<int>&nums){
    int n = nums.size();
    vector<int> pre(n);
    vector<int> suf(n);
    vector<int> ans(n);
    int p = nums[0]; // prefix product aray
    pre[0]=1;
    for(int i=1;i<n;i++){
        pre[i] = p;
        p*=nums[i];
    }
    p=nums[n-1];
    suf[n-1] =1;
    for(int i=n-2 ;i>=0;i--){
        sum[i]=p;
        p*=nums[i];
    }
}
int main(){

}