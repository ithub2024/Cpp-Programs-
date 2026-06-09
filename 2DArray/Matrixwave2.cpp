# include<iostream>
using namespace std;
int main(){

cout<<"Enter order of square matrix: "<<endl;
int m;
cin>>m;

int arr[m][m];
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }

}

cout<<endl<<endl;

for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//            filling transpose matrix
 cout<<endl<<endl;
 for(int i=0;i<m;i++){
    for(int j=i+1;j<m;j++){
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
    }
}
 cout<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

// printing in wave form 
cout<<"\nPrinting in wave from: "<<endl;
 for(int i=0;i<m;i++){
    if(i%2==0){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
      //  cout<<endl;
    }
    else{
        for(int j=m-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }

    }
 }

}