// time complixity og this code is O(log n)
# include<iostream>
# include<vector>
using namespace std;
int peakIndexInMOuntain(vector<int>&arr){
    int n= arr.size();
    int lo = 1;
    int hi = n-2;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]) return mid;
        else if(arr[mid]>arr[mid+1]) hi = mid-1;
        else lo = mid +1;
    }
    return 100; //(ye statement kabhi bhi hit nhi kre gi but must to give)
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
int ans = peakIndexInMOuntain(v);
cout<<"\nAt index: "<<ans;
}
