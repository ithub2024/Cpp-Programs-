# include <iostream>
using namespace std;
int maze(int sr , int sc , int  er , int ec ){
    if(sr>er || sc>ec ) return 0;
    if(sr==er && sc==ec) return 1;
    int RightWays = maze(sr , sc+1 ,er ,ec);
    int DownWays = maze(sr+1 , sc ,er ,ec);
    int totalWays = RightWays + DownWays;
    return totalWays;
}
void PrintPath(int sr , int sc , int  er , int ec , string s){
    if(sr>er || sc>ec ) return ;
    if (sr == er && sc == ec){
        cout<<s<<endl;
        return ;
    }
    PrintPath( sr ,  sc+1 ,   er ,  ec , s+'R'); // right 
    PrintPath( sr+1 ,  sc ,   er ,  ec , s+'D'); // down
}
int main(){
    //  int s1, s2;
    //  cout<<"Enter your starting cordinate (x1,y1): ";
    //  cin>>s1;cin>>s2;
    //  int e1,e2;
    //  cout<<"\nEnter your ending cordinate(x2,y2): ";
    //  cin>>e1;cin>>e2;
     int a = maze(1,1,4,4);
    cout<<"total ways: "<<a<<endl;
    PrintPath(1,1,4,4,"");
}