# include<iostream>
# include<climits>
using namespace std;
void print(int arr[] , int n, int idx , int max){
    if(idx == n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max =arr[idx];
    print(arr,n,idx+1,max);
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
    print(arr,p,0,INT_MIN);
}