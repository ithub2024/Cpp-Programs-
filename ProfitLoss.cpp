# include <iostream>
using namespace std;
int main(){
    cout<<"Enter the cost price: "<<endl;
    int cp;
    cin>>cp;
    cout<<"Enter the selling price: "<<endl;
    int sp;
    cin>>sp;
    if (sp>cp){
        //  int profit =sp -cp;
        cout<<"profit = "<<sp-cp;
    }
    if(cp>sp){
        // int loss = cp-sp;
        cout<<"loss= "<<cp-sp;

    }
    if (sp==cp)
    {
        cout<<"No profit,No loss";
    }
    
}
