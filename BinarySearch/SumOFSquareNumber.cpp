// Time Complexity = O(n)
# include <iostream>
# include <cmath>
using namespace std;
bool isPerfectSquare(int n){
    int root = sqrt(n);
    if(root * root==n) return true;
    else return false ;
}
bool judgeSquareSum(int c){
    int x =0;
    int y = c;
    while(x<=y){
        if(isPerfectSquare(x)&& isPerfectSquare(y)) return true;
        x++;
        y--;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool flag = judgeSquareSum(n);
    cout<<flag;
}