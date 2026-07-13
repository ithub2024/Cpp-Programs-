
# include<iostream>
using namespace std;
int LowerBound(int arr[],int size , int tar){
    int low =0;
    int high = size-1;
    bool flag = false;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==tar){
             flag = true;
             return arr[mid-1];
             break;
        }
        else if(arr[mid]>tar) high = mid-1;
        else low = mid+1;
    }
    if(flag==false) return arr[low];

}
int main(){
int arr[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter Target number: ";
    cin>> target;
    cout<<"Lower Bound of "<<target<<" is "<<LowerBound(arr,n,target);
}