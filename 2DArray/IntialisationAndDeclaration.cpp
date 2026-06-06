# include <iostream>
using namespace std;
int main(){
   // int arr[3][3]={{1,2,3},{4,5,6,},{7,8,9} };
   // int arr[3][3]={1,2,3,4,5,6,7,8,9 };   // Automatic pair become like this {{1,2,3},{4,5,6,},{7,8,9}}
    int arr[][3]={ {1,2,3},{4,5,6,},{7,8,9} }; // this intialization and declartion both should be simaltensouly
    cout<<arr[1][0]; 
}