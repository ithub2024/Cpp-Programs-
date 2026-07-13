# include<iostream>
using namespace std;
int binarySearch(int arr[],int size ,int tar){
    int low =0;
    int high = size -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==tar){
            return mid;
        }
        else if(arr[mid]>tar) high = mid-1;
        else low = mid+1;
    }  
    return -1;
}
int main(){
    int arr[]={1,2,3,45,50,55,67,68,70,77,78,99,101};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter Target Element: "<<endl;
    cin>>target;
    int a =binarySearch(arr,n,target);
    if(a==-1) cout<<"Element not Present: "<<endl;
    else cout<<"Element Present at index: "<<a<<endl;
}