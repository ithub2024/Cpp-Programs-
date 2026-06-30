# include<iostream>
using namespace std;
void display(int arr[],int size ,int idx){
    if(idx ==size) return ;
    cout<<arr[idx]<<" ";
    display(arr,size,idx+1); 
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
    display(arr,p,0);
}