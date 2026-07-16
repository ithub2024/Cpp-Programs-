// Solve using Linear Search also. Whose time complixity is O(n);
# include <iostream>
using namespace std;
int main(){
int arr[]={0,1,2,3,4,5,6,7,8,25,35,36,46,78,84,88,90};
int n = sizeof(arr)/sizeof(arr[0]);
int lo = 0;
int hi = n-1;
int ans = -1;
while (lo<=hi)
{
    int mid = lo + (hi-lo)/2;
    if (arr[mid]==mid) lo=mid+1;
    else{
        ans = mid ;
        hi = mid -1;
    }
}
cout<<ans;

}