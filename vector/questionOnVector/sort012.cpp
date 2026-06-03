# include<iostream>
# include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort(vector<int>&p){
    int No0 = 0;
    int No1 = 0;
    int No2 = 0;
    for(int i=0;i<p.size();i++){
        if(p[i]==0) No0++;
        if(p[i]==1) No1++;
        if(p[i]==2) No2++;
    }
    cout<<"No of zero "<<No0<<endl;
    cout<<"No of Ones "<<No1<<endl;
    cout<<"No of Twos "<<No2<<endl;

    // filling  by method 
    for(int i=0;i<p.size();i++){
      if(i<No0) p[i] = 0;
      else if(i>=No0 && i<(No0+No1)) p[i]=1;
      else p[i] = 2;  
    }
     // another ways (sir ways)
    //  for(int i=0;i<p.size();i++){
    //   if(i<No0) p[i] = 0;
    //   else if(i <(No0 + No1)) p[i]=1;
    //   else p[i] = 2;  
    // }
}

int main(){
vector<int>v;
int n;
cout<<"Enter no size of vector: ";
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
display(v);
sort(v);
cout<<"Sorted Array is: "<<endl;
display(v);

}