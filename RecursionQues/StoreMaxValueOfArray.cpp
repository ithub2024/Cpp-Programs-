# include <iostream>
# include<climits>
using namespace std;
int maxInArray(int arr[], int n,int idx){
    if(idx == n) return INT_MIN;
    return max(arr[idx], maxInArray(arr,n,idx+1));
}
int main(){
    int p;
    cout<<"Enter size of array: ";
    cin>>p;
    int arr[p];
    cout<<"\nEnter elements of Array: ";
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
  int max = maxInArray(arr,p,0);
  cout<<max;
}