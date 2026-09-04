# include<iostream>
using namespace  std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = 0;
    int maxInd = 0;
    int prevSum = 0;
    for(int i=0;i<k;i++){
        prevSum += arr[i];
    }
    maxSum = prevSum;
    int i=1;
    int j=k;
    while(j<n){
        int currSum = prevSum + arr[j]-arr[i-1];
        if(maxSum  < currSum ){
            maxSum  = currSum;
            maxInd = i;
        }
        prevSum =  currSum; 
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxInd;
}