# include <iostream>
using namespace std;
int main(){
    cout<<"Enter marks: ";
    int m;
    cin>>m;
    // if(m>=91 && m<=100){
    //     cout<<"Execllent";
    // }
    // if(m>=81 && m<90){
    //     cout<<"Very Good";
    // }
    // if(m>=71 && m<80){
    //     cout<<"Good";
    // }
    // if(m>=61 && m<70){
    //     cout<<"Can do better";
    // }
    // if (m>=51 && m<60)
    // {
    //     cout<<"Avgrage";
    // }
    // if(m>=41 && m<50){
    //     cout<<"Below Average";
    // }
    // if(m<40){
    //     cout<<"Fail";
    // }
    if (m>=91){
        cout<<"Excellent";
    }
    else if (m>=81){
        cout<<"Very good";
    }
    else if (m>=71){
        cout<<"Good";
    }
    else if (m>=61){
        cout<<"can do better";
    }
    else if (m>=51){
        cout<<"Average";
    }
    else if (m>=41){
        cout<<"Below Avgrage";
    }
    else{
        cout<<"Fail";
    }
}