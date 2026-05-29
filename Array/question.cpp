// # include<iostream>
// using namespace std;
// int main(){
//     int marks[7];
//     cout<<"Enter marks: ";
//     //for input
//     for(int i=0;i<=6;i++){
//         cin>>marks[i];
//     }
//     //for output
//     for(int i=0;i<=6;i++){
//         if (marks[i]<35) cout<<i<<" ";
        
//     }
// }

// Advance way
# include<iostream>
using namespace std;
int main(){
cout<<"Enter number of Student";
int n; 
cin>>n;
int marks[n];
cout<<"Enter marks of student:";
for(int i =0;i<=n-1;i++){
    cin>>marks[i];
}
for(int i=1;i<=n-1;i++){
    if(marks[i]<35) {
    cout<<i<<" "; 
}
}
}
