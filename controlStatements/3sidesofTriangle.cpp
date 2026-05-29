# include <iostream>
using namespace std;
int main(){
    cout<<"Enter first side:"<<endl;
    int s1;
    cin>>s1;
    cout<<"Enter second side:"<<endl;
    int s2;
    cin>>s2;
    cout<<"Enter third side:"<<endl;
    int s3;
    cin>>s3;
    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
        cout<<"Triangle is possible with given side:"<<endl;
    }
    else{
        cout<<"Not Possible Triangle";
    }
}
