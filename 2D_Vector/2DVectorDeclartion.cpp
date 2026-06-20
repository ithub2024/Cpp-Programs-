# include<iostream>
# include<vector>
using namespace std;
int main(){
    // vector< vector<int> > v; // 2D Array vector declaration 

    // vector<vector<int>>v(2); // 2D vector with size 2

    // vector< vector<int>>v(3,vector<int>(2)); // 2D vector with size 3 and with each elements 2

    // v= {{2,2,2},{2,2,2},{2,2,2}};

    vector< vector <int>>v(4,vector<int>(3,5));cout<<endl;
    //ncout<<v.size();
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Length of vector:"<<v.size()<<endl; // length of vector
    cout<<"No of column"<<v[0].size()<<endl; // length of vector of vector  
}
