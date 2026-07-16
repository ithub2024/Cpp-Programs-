# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
vector<int> findclosestElement(vector<int>&arr,int k, int x){
    int n = arr.size();
    vector<int>ans(k); // kelements ko insert karoonga 
    if(x<arr[0]){
        for(int i=0;i<k;i++){
           ans[i]=arr[i];       
        }
        return ans;
    }
    if(x>arr[n-1]){
        int i = n-1;
        int j = k-1;
        while (j>=0)
        {
            ans[j] = arr[i];
            j++;
            i--;
        }
        return ans;
    }
    int lo =0;
    int hi = n-1;
    bool flag = false ; // if x is present in arr or not 
    int t=0;
    int mid =-1;
    // binary search 
    while (lo<=hi){
        mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            flag =true ; // present 
            ans [t] =  arr[mid];
            t++;
            break;
        }
        else if(arr[mid]>x) hi= mid-1;
        else lo = mid +1;
    }
    int lb = hi;
    int ub = lo;
    if(flag == true){
        lb = mid -1;
        ub = mid + 1;
    }
    while (t<k && lb>=0 && ub <= n-1){
        int d1 = abs(x-arr[lb]);
        int d2 = abs(x-arr[ub]);
        if(d1<=d2){
            ans[t] =  arr[lb];
            lb--;
        }
        else { // d1<d2
            ans [t] = arr[ub];
            ub ++;
        }
        t++;
    }
    if(lb<0){
        while(t<k){
            ans[t] = arr[ub];
            ub++;
            t++;
        }
    }
    if(ub>n-1){
        while(t<k){
            ans[t] = arr[lb];
            lb--;
            t++;
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
   // v.push_back(5);
    v.push_back(6);
    int x;
    cout<<"Enter Target Number: ";
    cin>>x;
    int k;
    cout<<"Number of Elements needed: ";
    cin>>k;
    vector<int>ans=findclosestElement(v,k,x);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}