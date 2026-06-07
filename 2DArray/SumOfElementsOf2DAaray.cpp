# include <iostream>
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
//  cout<<"2D Aaray is: "<<endl;   
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

int sum =0;
 for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           sum+= arr[i][j];
        }
    }
   cout<<"Sum of all elements of array is: "<<sum<<endl;
}