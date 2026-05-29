# include<iostream>
using namespace std;
int fact (int x){ //def
    int f =1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n, int r)
{
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
// int permutation(int n, int r){f
// int npr = fact(n)/fact(n-r);
// return npr;
//}
int main(){
   int n;
cout<<"Enter n: ";
cin>>n;
// int r;
// cout<<"Enter r:";
// cin>>r;
// int nfact = fact(n);
// int rfact = fact(r);
// int nrfact =fac(n,r);
// int npr = permutation (n,r);
//       cout<<ncr<<" "<<npr;
for (int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
        cout<<combination(i,j)<<" ";
    }
    cout<<endl;
}
}
 