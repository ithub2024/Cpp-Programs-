# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int count = 0;
    for(int i=0;i<=n-1;i++){
        if(num<arr[i]) count++;
    }
    cout<<"Number of grater elements than given number is: "<<count<<endl;
}
