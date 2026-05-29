# include<iostream>
# include<vector>
using namespace std;
void change (vector<int>&a){
    a[0]=100;
    a[7]= 18;
    for(int i=0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(0);
    v.push_back(1);    // vector pass by value hota h
    v.push_back(0);    // we can pass by reference using & (and)oprator
    v.push_back(0);
    v.push_back(7);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    cout<<"Without change function: "; 

    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    cout<<"After using change function: ";
    change(v);
    


}