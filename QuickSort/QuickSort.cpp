# include <iostream>
# include <algorithm>
using namespace std;
int partition(int arr[],int si, int ei){
    int pivotElements = arr[si];
    int count =0;
    for(int i = si+1 ; i <= ei ; i++){
        if(arr[i] <= pivotElements) count++;
    }
    int pivotIdx = count+si;
    swap(arr[si],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j<pivotIdx){
        if(arr[i] <= pivotElements) i++;
        if(arr[j] > pivotElements) j--;
        else if(arr[i]>pivotElements && arr[j]<=pivotElements){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;

}
void quickSort( int arr[] ,int si, int ei){
    if(si>ei) return; // base 
    int pi = partition(arr,si,ei);
    quickSort( arr , si , pi-1);
    quickSort( arr , pi+1 , ei);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}