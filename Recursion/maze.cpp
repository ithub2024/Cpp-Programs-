# include<iostream>
using namespace std;
int maze(int sr , int sc , int er , int ec){
    if(sc>ec || sr>er ) return 0;
    if(sr==er && sc==ec )  return 1;
    int rightWays = maze(sr ,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays ;
}
    int main(){
        cout<<"Total Ways to reach Destination is: "<<maze(1,1,3,4);
    }
