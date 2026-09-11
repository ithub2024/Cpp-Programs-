// Still error 
# include <iostream>
# include <vector>
# include <climits>
using namespace std;
int findDuplicate(vector<int>&nums){
    int n = nums.size();
    int i=0;
    while(i<n){
        int correctIdx = nums[i];
        if(nums[correctIdx]== nums[i]) return nums[i];
        else swap(nums[i],nums[correctIdx]);
    }
    return 100;
}
int main(){
    int arr[] = {3,1,2,4,2};
    int n = sizeof(arr)/sizeof(arr[1]);
    vector<int>ques(arr,arr+1);
    for(int i=0;i<ques.size();i++){
        cout<<ques[i]<<" ";
    }
    int ans = findDuplicate(ques);
    cout<<"Duplicate Number is: "<<ans;
} 
