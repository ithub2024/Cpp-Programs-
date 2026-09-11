# include<iostream>
# include<vector>
using namespace std;
int missingNumber(vector<int>&nums){
    int n= nums.size();
    vector<bool>check(n+1,false);
    for(int i=0;i<n;i++){
        int ele = nums[i];
        check[ele]  = true;
    }
    for(int i=0;i<n;i++){
        if(check[i]==false) return i;
    }
    return 100;
}

int main(){
    int arr[]={9,6,4,2,3,5,7,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>ques(arr,arr+n);
    for(int ele:ques){
        cout<<ele<<" ";
    }
    int ans = missingNumber(ques);
    cout<<"\n Missing Number is: "<<ans;
    
    
}
