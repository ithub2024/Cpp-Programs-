// fix it 
# include<iostream>
# include<climits>
# include<vector>
using namespace std;
bool  check(int speed , vector<int>&piles , int h){
    int count =0 ;
    int n = piles.size();
    for(int i=0;i<n;i++){
        if(count> n) return false;
        if(speed>=piles[i]) count++;
        else if (piles[i]%speed==0) count += piles[i];
        else count += piles[i]/speed+1; // V V Imp 
    }
    if(count > h) return false;
    else return true;
}
long long minimumTime(vector<int>&time,int totalTrips){
    int n = time.size();
    int mx = -1;
    for(int i=0;i<n;i++){
        mx = max(mx,time[i]);
    }
    long long lo =1;
    long long hi= (long long) mx * (long long) totalTrips;
    long long ans = -1;
    while(lo<=hi){
        long long mid = lo+(hi-lo)/2;
        if(check(mid , time , totalTrips)==true ){
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
    }
    return ans;
}
int main(){
    vector<int>buses;
    buses.push_back(1); 
    buses.push_back(2); 
    buses.push_back(3);

}