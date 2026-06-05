// # include<iostream>
// # include<vector>
// using namespace std;
// void display (vector<int>&v){
//      cout<<"Vector: ";
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;    
// }
// void nextPermutation(vector<int>&nums){
//     int n = nums.size();
//     // 1) Find pivot index
//     int idx= -1;
//     for(int i= n-2;i>=0;i--){
//         if(nums[i]<nums[i+1]){
//             idx = 1;
//             break;
//         }
//     }
//     if(idx ==-1){  // if array is already greater 
//         reverse(nums.begin() ,nums.end());
//         return ;
//     }
//     //2 Sorting / reverse after pivot 
//     reverse(nums.begin()+idx+1,nums.end());
//     //3) Finding the just greater elements than idx.
//     int j =-1;
//     for(int i=idx+1;i<n;i++){
//         if(nums [i]>nums[idx]){
//             j=i;
//             break;
//         }
//     }
//     int temp = nums[idx];
//     nums[idx] = nums[j];
//     nums[j] = temp;
//     return;
// }

// int main(){
//     vector<int>v;
//     int n;
//     cout<<"Enter size of vector: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
// }





 // another code 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>& v){
    cout << "Vector: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;    
}

void nextPermutation(vector<int>& nums){
    int n = nums.size();

    // 1) Find pivot index
    int idx = -1;

    for(int i = n - 2; i >= 0; i--){
        if(nums[i] < nums[i + 1]){
            idx = i;   // FIXED
            break;
        }
    }

    // If array is already the largest permutation
    if(idx == -1){
        reverse(nums.begin(), nums.end());
        return;
    }

    // 2) Find just greater element than nums[idx]
    int j = -1;

    for(int i = n - 1; i > idx; i--){
        if(nums[i] > nums[idx]){
            j = i;
            break;
        }
    }

    // 3) Swap
    swap(nums[idx], nums[j]);

    // 4) Reverse the remaining part
    reverse(nums.begin() + idx + 1, nums.end());
}

int main(){
    vector<int> v;
    int n;

    cout << "Enter size of vector: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Original ";
    display(v);

    nextPermutation(v);

    cout << "Next Permutation ";
    display(v);

    return 0;
}