// Maintain its main part
# include<iostream>
# include<vector>
using namespace std;
int missingNumber(vector<int>&nums){
    int n = nums.size();
    int i = 0;
    while(i<n){
        int correctInd = nums[i];
        if(correctInd == i || nums[i]==n) i++;
        else swap(nums[i], nums[correctInd]);
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i) return i;
    }
    return n;
}

int main(){
    int arr[]={4,25,6,97,3,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>ques(arr,arr+n);
    for(int ele: ques){
        cout<<ele<<" ";
    }
    int ans = missingNumber(ques);
    cout<<endl<<ans;
}
