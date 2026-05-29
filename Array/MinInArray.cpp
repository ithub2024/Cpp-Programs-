// error in program
# include<iostream>
# include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){ // indexes liya jata h
        cin>>arr[n];
    }
    int min = INT_MAX;
    for(int i =0;i<=n-1;i++){
        if(min<= arr[i]) min=arr[i];
    }
    cout<<"The minimum number of Array is: "<<min<<endl;
}