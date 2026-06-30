# include<iostream>
using namespace std;
void hanoi(int n,char s , char h , char d){
    if(n==0) return ;
    hanoi(n-1,s,d,h);
    cout<<"Move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
    hanoi(n-1,h,s,d);
}
int main(){
    int n;
    cout<<"Enter number of Disk: ";
    cin>>n;
    cout<<"\nSteps to solve:\n\n";
    hanoi(n,'A','B','C');
}