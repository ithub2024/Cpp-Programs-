
//absolute value = modulus value 
# include <iostream>
using namespace std;
int main(){
    cout<<"Enter a integer: ";
    int a;
    cin>>a;
    if(a>=0){
        cout<<"The absolute value is: "<<a<<endl; /*cout<<a<<endl;
                                                    else{
                                                    cout<<-a
                                                    }*/
    }
    else{
        int i = ((-1)*a);
        cout<<"The absolute value is:"<<i<<endl;
    }

}