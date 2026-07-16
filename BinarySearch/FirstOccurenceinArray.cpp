// Code not runnig fix it.
# include <iostream>
using namespace std;
int search(int arr[],int n,int tar){
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid =lo +(hi-lo)/2;
        if(arr[mid-1]!=tar){
            flag =true;
            cout<<mid;
            break;
        }
        else hi =mid-1;
        if(arr[mid]<tar) lo = mid+1;
        else hi = mid-1;
    } 
    if (flag ==false)cout<<-1;
}
int main(){
    int arr[]={1,2,2,3,3,3,3,3,4,4,4,5,5,5,6,6,7};
    int size =13;
    int x=3;
    int ans = search(arr,size,x);
    cout<<"Ans is: "<<ans;
}
