// littele bit error in this code 
# include<iostream>
# include<vector>
using namespace std;
bool check(int speed, vector<int>&piles, int h){
    int count  = 0;
    int n = piles.size();
    for(int i=0;i<n;i++){
        if(count > n) return false;
        if(speed>=piles[i]) count++;
        else if(piles[i]%speed==0) count +=piles[i]/speed;
        else count += piles[i]/speed +1; // VV IMP
    }
    if(count>h) return false;
    else return true;
}
int minEatingSpeed(vector<int>&piles, int h){
    int n = piles.size();
    int mx = -1;
    for(int i=0; i<n;i++){
        mx = max(mx,piles[i]);
    }
    int lo =1;
    int hi = mx;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(check (mid,piles,h) == true){
            ans = mid ;
            hi = mid -1;
        }
        else lo =mid +1;
    }
    return ans ;
}
int main(){

vector<int>v;
v.push_back(30);
v.push_back(11);
v.push_back(23);
v.push_back(4);
v.push_back(20);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
int n;
cout<<"Enter Days: ";
cin>>n;
int ans = minEatingSpeed(v,n);
cout<<"ans: "<<ans;
}