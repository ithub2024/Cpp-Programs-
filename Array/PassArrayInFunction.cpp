# include<iostream>
using namespace std;
void display(int a[],int size){  //pass by refernce hota h
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
void change(int b[],int size){
    b[0]= 100;

}
}
int main(){
 int arr[] = {12,45,78,96,3,2};
int size = sizeof(arr)/sizeof(arr[4]);
cout<<size;
 display(arr,size);
 change(arr,size);
 display(arr,size);
}