# include <iostream>
using namespace std;
int main(){
    int arr[] = {5,-4,0,3,2,1};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){ 
        bool flag = true;
        for(int j=0;j<n-1-i;j++){ 
            if(arr[j]>arr[j+1]){ 
                swap(arr[j],arr[j+1]);
                flag = false ;                
            }
        }
        if(flag == true){
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// Space Complexity = O(1)
// Time Complexity:
// Best Case:   O(n);
// Avg Case:    O(n2);
// Worst Case:  O(n2);