# include <iostream>
# include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
    
void ReversePart(int i ,int j,vector<int>&v){
    while(i<=j){
        int temp = v [i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}


int main(){
vector<int>v;
cout<<"Enter size of array ";
int n;
cin>>n;
cout<<"Enter elements of Array: ";
for(int i=0;i<n;i++){
    int p;
    cin>>p;
    v.push_back(p);
}
display(v);


int k;
cout<<"Enter number times to rotate: \n";
cin>>k;      //k<=n;
if(k>n) k = k%n ;
ReversePart(0,n-k-1,v);
ReversePart(n-k,n-1,v);
ReversePart(0,n-1,v);
display(v);
}