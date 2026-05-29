// correct code 

# include<iostream>
# include<vector>
using namespace std;
void sort(vector<int>&a){
    int n = a.size(); 
    int i=0;
    int j= n-1;
    while(i<j){
    if(a[i]>0) i++;
    if(a[j]<0) j--;
    if(a[i]>0 && a[j]<0){
        int temp = a[i];
        a[i]=a[j];
        a[j] = temp;
        i++;
        j--;
    }
    }
    void display(vector<int> &a){
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter size of Array: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl<<"Vector is: "<<endl;
    for (int i=0;i<n;i++ ){
        cout<<v[i]<<" ";
    }
    sort(v);   
    display(v);
}
