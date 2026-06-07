//sum of 2 maxrtrix
# include <iostream>
using namespace std;
int main(){
    cout<<"Maxtrix 1: "<<endl<<endl;
    int m;
    cout<<"Enter rows: "<<endl;
    cin>>m;
    int n;
    cout<<"Enter column: "<<endl;
    cin>>n;
    cout<<"Enter Aaray elements: "<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
 
    cout<<"Maxtrix 2: "<<endl<<endl;
    int p;
    cout<<"Enter rows: "<<endl;
    cin>>p;
    int  q;
    cout<<"Enter column: "<<endl;
    cin>>q;
    cout<<"Enter Aaray elements: "<<endl;
    int arr1[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Sum of Matrix "<<endl;
    int res[p][q]; // 3  2 
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            res[i][j]=arr[i][j]+arr1[i][j];
        }
    }    
        cout<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }    
}