# include <iostream>
using namespace std;
int main(){

    int m;
    cout<<"Enter Rows"<<endl;
    cin>>m;
    int n;
    cout<<"Enter column"<<endl;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //                  Without using another matrix
    cout<<endl<<endl;
    cout<<"Transpose Matrix:"<<endl;

    // printing of elements
    // for(int j=0;j<n;j++){  // column 
    //     for(int i=0;i<m;i++){  // rows
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //          FILLING OF TRANSPOSE MATRIX

    cout<<endl<<endl;
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=arr[j][i];
        }
    }
    //          Printing of elements
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
       cout<<t[i][j]<<" ";
         }
    cout<<endl;
    }
}