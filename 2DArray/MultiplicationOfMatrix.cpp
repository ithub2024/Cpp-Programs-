# include<iostream>
using namespace std;
int main(){
    cout<<"Matrix 1"<<endl;
    int m;
    cout<<"Enter Rows of Matrix: ";
    cin>>m;
    int n;
    cout<<"\nEnter column of Matrix: ";
    cin>>n;
    cout<<endl;

   
    cout<<"Matrix 2"<<endl;

    int p;
    cout<<"\nEnter row Matrix: ";
    cin>>p;

    int q;
    cout<<"\nEnter column of Matrix: ";
    cin>>q;

    cout<<endl;
    if(n==p){

    cout<<"Enter elements of Matrix 1: "<<endl;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter elements of second matrix: ";
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    // resultant matrix 
    int res [m] [q];  // This is according to matrix multiplication rule 
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            // multiply
            res[i][j] =0;
            for(int k=0;k<p;k++){
            res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    cout<<"Multiplication: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
else{
    cout<<"Multiplication not possible: "<<endl;
    }
}
