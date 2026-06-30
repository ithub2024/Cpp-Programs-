# include<iostream>
using namespace std;
int main(){
int arr[] = {2,4,0,1,8,5,7,6,3,7,9};
int n = (sizeof(arr)/sizeof(arr[0]));
for( int ele:arr ){  //A range-based for loop works only with containers like arrays, vectors, strings, etc., not with integers.
    cout<<ele<<" ";
}
}