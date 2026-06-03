# include<iostream>
# include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void dutchalgo(vector<int>&a){
    cout<<"Algo work"<<endl;
    int low = 0;
    int mid = 0;
    int high = a.size()-1;
    while(mid<=high){

        if(a[mid]==2){

            int temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
           
            high --;
        } 


        else if(a[mid]==0){
            //swap(a[mid],a[low]);
            int temp = a[mid];
            a[mid] = a[low];
            a[low] = temp;
            low ++;
            mid ++;
        }
        else {  //(a[mid]==1)
            mid ++;     
        }
        
    }

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
 dutchalgo(v);
 display(v);   
}