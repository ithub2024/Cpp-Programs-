# include<iostream>
# include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target value: "<<endl;
    cin>>x;
    vector<int >v;
    int n;
    cout<<"Enter Size of Array: "<<endl;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }
    cout<<"Size of vector: "<<v.size()<<endl;
  
    for(int i=0;i<=n-2;i++){  // chronology samjo 
        for(int j =i+1;j<=v.size()-1;j++){  // why v.size()-1 here
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")\n";
            }
        }
    }
}