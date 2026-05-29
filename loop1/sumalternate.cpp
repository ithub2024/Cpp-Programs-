// 1-2+3-4+5-6+7......... upto n terms
# include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number";
cin>>n;
int sum =0;
for(int i=1;i<=n;i++){
    if(i%2!=0) sum +=i;
    else sum -=i; 
}
}

//                                method-2
// // if n is even -> (1-2)(3-4)(5-6)(7-8)(9-10)........((n)-(n-1)) which is equal to -n/2
// if n is even -> (1-2)(3-4)(5-6)(7-8)(9-10)........odd terms then -n/2+that odd number
// if(n%2==0) sum = -n/2;
// else sum = -n/2 + n;
// cout<<sum;