// LeetCode 852
// in mountain Array elements are first e=written in ascending order than in decending Order
# include<iostream>
# include<vector>
using namespace std;
int worstMethod(vector<int>&arr){
    int n = arr.size();
    int idx =-1;
    for(int i=1; i<=n-2; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            idx = i;
            cout<<"Mountain Elements is: "<<arr[idx];
            break;
        }

    }
   
    return idx;
    
}
int main(){
vector<int>v;
int n;
cout<<"Enter Size of vector: ";
cin>>n;
cout<<"Enter vector Elements: \n";
for(int i=0;i<n-1;i++){
    int p;
    cin>>p;
    v.push_back(p);
} 
int ans = worstMethod(v);
cout<<"\nAt index: "<<ans;
}


