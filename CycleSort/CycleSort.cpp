// correct it 
# include<iostream>
# include<algorithm>
# include<climits>
using namespace std;
int main(){
    int arr[]={4,25,6,97,3,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        int correctIdx=arr[i]-1;
        if( i== correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
