# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter order of Square Matrix: "<<endl;
    cin>>n;

    cout<<"Enter elements of matrix: "<<endl;

    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] =temp;
        }
    }
    // reverse each row 
    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
            int temp = matrix[k][i];
            matrix[k][i] = matrix[k][j];
            matrix[k][j] =temp;
            i++;
            j--;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}