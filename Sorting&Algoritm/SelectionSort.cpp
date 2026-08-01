# include <iostream>
# include<vector>
# include<climits>
# include<algorithm>
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
        // Selection Sort algorithm  
    for(int i=0; i<n-1 ;i++){
    int min = INT_MAX;
    int mindx = -1;
    for(int j=i ; j<n ; j++){
        if(arr[j] < min) {
            min = arr[j];
            mindx = j;
    }
}
    swap( min ,arr[mindx]); // Index pe ja kr swap kr raha h 
}
cout<<"Sorted Array is: "<<endl;
    for(int ele:arr){
        cout<<ele<<" ";
    }
}
// Time Complexity
// Best Case  :  O(n2)
// Avg Case   :  O(n2)
// Worst Case :  O(n2)
// Space Complixity : O(1)