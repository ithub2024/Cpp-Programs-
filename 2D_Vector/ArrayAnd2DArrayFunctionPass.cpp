# include<iostream>
using namespace std;

// void change(int a[] ){ // here we have not to enter the size of arr in 1D
//     a[0]=100;
// }

void change2D(int arr[3][3] ){ // here we must enter the size of arr in 2D
    arr[1][2] = 100;
}
void display(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

// int arr[3]={1,2,3};
// cout<<arr[0]<<endl;
// change(arr);
// cout<<arr[0]<<endl;

int arr[3][3] = {{1,2,3},{4,5,6,},{7,8,9}}; cout<<"Before change: "<<endl;
display(arr);cout<<endl<<endl; 
change2D(arr); cout<<"After change: "<<endl;
display(arr);


}