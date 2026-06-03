# include<iostream>
# include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void input(vector<int>&a){
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
}
}
     
vector<int> merge(vector<int>&v1,vector<int>&v2){
    int n=v1.size();
    int m=v2.size();
    vector<int> res(m+n);
    int i = 0;  //v1
    int j = 0;  //v2
    int k = 0;  //res
    while (i < n && j < m)
    {
        if(v1[i] < v2[j]){
            res[k] = v1[i];
            i++;
        }
        else {
            res[k] = v2[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        res[k++] = v1[i++];
    }
    while (j < m) {
        res[k++] = v2[j++];
    }
    return res;
}

int main(){
vector<int>v1;
vector<int>v2;

cout<<"Vector 1: "<<endl;
input(v1);
cout<<"Vector 2: "<<endl;
input(v2);
cout<<"Vector 1: ";
display(v1);
cout<<"\nVector 2: ";
display(v2);
vector<int>v = merge(v1,v2);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

}