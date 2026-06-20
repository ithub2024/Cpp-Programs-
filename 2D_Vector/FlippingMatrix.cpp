// Fix it.
# include<iostream>
# include<vector>
using namespace std;
void input(vector<int>&v){
    for(int i =0;i<v.size();i++){
        int x;
        cin>>x;
        v.push_back(x);        
        }
    }
int matrixScore(vector<vector<int>>&grid){
    int rows = grid.size();
    int colms = grid[0].size();
    // Making the first column a 1's
    for(int i=0;i<colms;i++){
        if(grid[i][0]==0){
            for(int j=0;j<colms;j++){
            if(grid[i][j]==0) grid[i][j]=1;
            else grid[i][j]=0;
        }
    }
  }
  for(int j=0;j<colms;j++){
        int noz =0;
        int noo =1;
        for(int i=0;i<rows;i++){
            if(grid[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
            for(int i=0;i<rows;i++){
                if(grid [i][j]==0) grid [i][j]=1;
                else grid[i][j]=0;
            }
        }
    } 
    int sum =0;
    for(int i=0;i<rows;i++){
        int x =1;
        for(int j=colms-1;j>=0;j--){
            sum +=grid[i][j] * x;
            x*=2;
        }
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter no of rows: \n";
    cin>>n;
    int m;
    cout<<"Enter no if Colms: \n";
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(n));
    vector<int>v1;
    vector<int>v2;
    cout<<"Enter V1 elements: \n";
    input(v1);
    cout<<"Enter V1 elements: \n";
    input(v2);
    arr.push_back(v1);
    arr.push_back(v2);
    int a = matrixScore(arr);
    cout<<"Sum: "<<matrixScore;

}