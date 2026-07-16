// Leetcode 69
# include<iostream>
using namespace std;
int mySqrt(int x){
    int lo =0;
    int hi = x;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if((long long )(mid * mid)==(long long )(x)) return mid;
        else if ((long long )(mid*mid )>(long long)x) hi = mid-1;
        else  lo = mid +1;
    }
    return hi;
}
int main(){
    int p;
    cout<<"Enter Number: ";
    cin>>p;
    int ans = mySqrt(p);
    cout<<"Square Root of Enter Number is: "<<ans;
}