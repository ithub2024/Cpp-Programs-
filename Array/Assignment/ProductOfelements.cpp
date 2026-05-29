# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of array: ";
    cin>>n;
    int arr[n];
    for(int i =1;i<=n-1;i++){
        cin>>arr[i];
    }
    int prd = 1;
    for(int i = 0;i<=n-1;i++){
        prd *= arr[i];
    }
    cout<<"product of elements is: "<<prd;
}
