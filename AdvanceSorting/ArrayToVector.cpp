# include<iostream>
# include<vector>
using namespace std;
int main(){
    int arr[]={4,8,6,3,7,9,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int ele : v){
        cout<<ele<<" ";
    }
}