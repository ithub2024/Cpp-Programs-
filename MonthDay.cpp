# include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Month Number:"<<endl;
    cin>>a;
    //1 3 5 7 8 10 12 --> 31 days
    //4 6 9 11 --> 30 days
    //2 -->28 days 
    switch (a==1 || a==3 || a==5 || a==7 || a==8 || a== 10 || a==12){
        case 1:
        cout<<"31 Days";
        break;
    }
    switch(a==4 || a==6 || a==9|| a==11){
        case 1:
        cout<<"30 Days";
        break;
    }
    switch(a){
        case 2:
        cout<<"28 days";
    }
    }
    
