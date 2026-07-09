# include<iostream>
using namespace std;
int KthGrammar(int n, int k){
    if(n==1) return 0;
    if(k%2==0){   // Even--> flip
        int a = KthGrammar(n-1,k/2);
        if(a==0) return 1;
        else return 0;
    }
    else return KthGrammar(n-1,k/2+1); // Odd --> Same 
}
int main(){
    int a = KthGrammar(4,8);
    cout<<"Value is: "<<a<<endl;
}