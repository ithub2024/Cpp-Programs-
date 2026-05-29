# include <iostream>
using namespace std;
int main(){
cout<<"Enter a integers:"<<endl;
int n;
cin >>n;
if(n%3==0||n%5==0){
    if(n%15!=0){
        cout<<"Enter number is divisible by 3 or 5 but not by 15 ";        
    }
    else{
        cout<<"Not matching the condition";
    }
  
}
  else{
        cout<<"Not matching the outer condition";
    }

}