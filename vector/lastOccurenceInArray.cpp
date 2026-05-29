// Do correction
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(0);
    v.push_back(6);    
    v.push_back(5);    
    v.push_back(0);
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    int x;
    cout<<"Enter nuber whose last index needed:  ";
    cin>>x;

               //cheacking from first 
    int count=0;
    int idx = -1;
    // for(int i=0;i<=v.size()-1;i++){
    //     if(v[i]==x) {
    //         idx = i ;
    //         count++;
    // }
//}
               //traversing from back side
    for(int i=v.size()-1; i>=0;i--){
        if(v[i]==x){
            idx =i;
            count++;
            break;
           
        }
       
    }
    cout<<"No of occurence of given value: "<<count<<endl;
    cout<<"Last Index: "<<idx<<endl;

}