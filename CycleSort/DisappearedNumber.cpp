# include <iostream>
# include <vector>
using namespace std;
vector<int>findDisappearNumber(vector<int>&nums){
    int n = nums.size();
    int i = 0;
    while(i<n){
        int correctInd = nums[i]-1;
        if(nums[correctInd]==nums[i] || correctInd==i) i++;
        else swap(nums[i], nums[correctInd]);
    }
    vector<int>ans;
    for(int i=0; i<n;i++){
        if(nums[i]!=i+1) ans.push_back(i+1);
    }
    return ans;
}
int main(){
    int arr[] ={4,3,2,7,8,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>ques(arr,arr+n);
    for(int ele: ques){
    cout<<ele<<" ";
    }
    vector<int>p = findDisappearNumber(ques);
    cout<<"\n Missing Elements is: ";
    for(int ele : p ){
        cout<<ele<<" ";
    }
}
