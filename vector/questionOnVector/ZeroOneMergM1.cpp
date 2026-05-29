# include<iostream>
# include<vector>
using namespace std;
int  main(){
    vector<int>v;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int Noz = 0;
    int NoO = 0;
    for(int i=0;i<n;i++){    //first time traversing vector
        if(v[i]==0) Noz++;
        else  NoO++;
    }
    cout<<"No of zeros: "<<Noz<<endl;
    cout<<"No of Ones: "<<NoO<<endl;
    for(int i=1;i<n;i++){
        if(i<Noz) v[i] = 0;
        else v[i] = 1;
    }
    for(int i=0;i<n;i++){   // Second time traversing loop
        cout<<v[i]<<" ";
    }
}
