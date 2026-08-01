# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
int main(){
vector<int>arr;
int n;
cout<<"Enter Size of Vector: ";
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr.push_back(x);
}
// Inertion Sort
    for(int i=0 ; i<n ;i++){
        int j=i;
        while (j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
        
    }
cout<<"Sorted Array is: "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
}

// This can be used: 
// for(int i=0 ; i<n; i++){
//     int j=i;
//     while(j>=1){
//         if( arr[j] >= arr[j-1] ) break;
//         else swap(arr[j] , arr[j-1]);
//         j--;
//     }
// }

// Time Complexity
// Best Case  :  O(n)
// Avg Case   :  O(n2)
// Worst Case :  O(n2)
// Space Complixity : O(1)