
   //               Method -1
 # include<iostream>
 using namespace std;
int main(){
    int m,n;
    cout<<"Enter no of Rows: ";
    cin>>m;
    cout<<"\nEnter no column: ";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int minr =0 , minc=0;
    int maxr = m-1 , maxc = n-1;
    while(minr<=maxr && minc<=maxc){
        for(int j=minc ; j<=maxc ;j++){   // Right traverse
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc ) break;

        for(int i = minr ;i<=maxr;i++){ // down 
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc ) break;


        for(int j = maxc ;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc ) break;

        for(int i = maxr ;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
        if(minr>maxr || minc>maxc ) break;
    } 
}





//                        Method -2 
// int main (){
//     int m,n;
//     cout<<"Enter no of Rows: ";
//     cin>>m;
//     cout<<"\nEnter no column: ";
//     cin>>n;

//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int minr =0 , minc=0;
//     int maxr = m-1 , maxc = n-1;

//     int tne = n*m;
//     int count = 0;
//     while(minr<=maxr && minc<=maxc){
//         for(int j=minc ; j<=maxc && count<tne ;j++){   // Right traverse
//             cout<<arr[minr][j]<<" ";
//             count++;
//         }
//         minr++;
        

//         for(int i = minr ;i<=maxr && count<tne ;i++){ // down 
//             cout<<arr[i][maxc]<<" ";
//             count++;
//         }
//         maxc--;
        


//         for(int j = maxc ;j>=minc && count<tne ;j--){
//             cout<<arr[maxr][j]<<" ";
//             count++;
//         }
//         maxr--;
        

//         for(int i = maxr ;i>=minr && count<tne ;i--){
//             cout<<arr[i][minc]<<" ";
//             count++;
//         }
//         minc++;
        
//     } 

//}
