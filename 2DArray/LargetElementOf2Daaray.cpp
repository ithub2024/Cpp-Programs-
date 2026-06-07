# include <iostream>
# include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter no rows: "<<endl;
    cin>>m;
    int n;
    cout<<"Enter no column: "<<endl;
    cin>>n;
    cout<<"Enter Aaray elements: "<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
 cout<<"2D Aaray is: "<<endl<<endl<<endl;   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int max =INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<"Largest elements of 2D Array is: "<<max<<endl;

    //      code for Second Largest elements 

    int smax = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(smax<arr[i][j] && arr[i][j]!=max) smax = arr[i][j];
        }
    }
    cout<<"Second Largest elements of Array is: "<<smax<<endl;
}