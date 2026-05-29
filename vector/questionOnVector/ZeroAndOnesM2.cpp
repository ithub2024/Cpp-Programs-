# include<iostream>
# include<vector>
using namespace std;
void sort02(vector<int>&v){
    int p= v.size();
    int i = 0;
    int j =p-1;
    while(i<j){         // LOOP 1
        if(v[i]==0) i++;
        if(v[j]==1)j--;
         if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int  main(){
    vector<int>v;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort02(v);
   for(int i=0;i<n;i++){  
        cout<<v[i]<<" ";
    }
}
 // Above code give wrong Answer in input 1 1 0 1 0 1 1 0
 // TO CORRECT IT MAKE CHANGES IN LOOP 1 
 //                Method 1
//   while(i<j){         // LOOP 1
//         if(v[i]==0) i++;
//         if(v[j]==1)j--;
//          if(i<j) break;  (sore sort  solution)
//         if(v[i]==1 && v[j]==0){
//             v[i]=0;
//             v[j]=1;
//             i++;
//             j--;

//                 Method-2 
//  while(i<j){         // LOOP 1
//      if(v[i]==1 && v[j]==0){
//             v[i]=0;
//             v[j]=1;
//             i++;
//             j--;
//         if(v[i]==0) i++;
//         if(v[j]==1)j--;



//               Method-3 (Using if else)

//  while(i<j){         
//         if(v[i]==0) i++;
//        elseif(v[j]==1)j--;
//         elseif(v[i]==1 && v[j]==0){
//             v[i]=0;
//             v[j]=1;
//             i++;
//             j--;
//         }