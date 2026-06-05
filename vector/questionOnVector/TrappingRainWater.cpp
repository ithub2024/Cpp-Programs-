# include<iostream>
# include<vector>
using namespace std;
void display(vector<int>&v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
int trap (vector<int>&height){
    int n = height.size();
    // previous greatest elements array
    int prev[n];   // naya Array
    prev[0]=-1;    //naya array ka 0th index elements -1 h 
    int max = height [0];  // max mein height ka 0th elements assign h 
    for(int i=1;i<n;i++){
        prev[i] = max; // prev array mein max value assign ho raha h 
        if(max<height[i]) max = height[i];
    }


    //  Changes are done here
    cout<<"Previous greatest elements \n";
    for(int i=0;i<n;i++){
        cout<<prev[i]<<" ";
    }


    // next greatest elements array
    
    int next [n];
    next[n-1] = -1;
    max = height[n-1];
    for(int i=n-2;i>=0;i--){
        next[i] = max;
        if(max<height[i]) max = height[i];
        
    }

    cout<<"\nNext greatest elements \n";
    for(int i=0;i<n;i++){
        cout<<next[i]<<" ";
    }


    // minimum array
    int mini[n];
    for(int i=0;i<n;i++){
        mini[i]= min(prev[i],next[i]); // min is inbuilt finction in c++ which give min value auto
    }

    cout<<"\nMini array elements \n";
    for(int i=0;i<n;i++){
        cout<<mini[i]<<" ";
    }
    cout<<endl;



    // calculating water
    int water = 0;
    for(int i=1;i<n-1;i++){
        if(height[i]<mini[i]){
            water+=(mini[i]-height[i]);
        }
    }
    return water;
}
int main(){
    vector<int>bheight;
    int n;
    cout<<"Enter number land size: \n";
    cin>> n;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        bheight.push_back(h);
    }
    cout<<"\nHeigh of building are"<<endl;
    display(bheight);
    cout<<endl;
    int count = trap(bheight);

    cout<<"Total water traps "<<count<<endl;
}


   //                 Method -2 (using only 2 vector)
# include<iostream> 
# include<vector>
using namespace std;
void display(vector<int>&v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
int trap (vector<int>&height){
    int n = height.size();
    // previous greatest elements array
    int prev[n];   // naya Array
    prev[0]=-1;    //naya array ka 0th index elements -1 h 
    int max = height [0];  // max mein height ka 0th elements assign h 
    for(int i=1;i<n;i++){
        prev[i] = max; // prev array mein max value assign ho raha h 
        if(max<height[i]) max = height[i];
    }


    //  Changes are done here
    cout<<"Previous greatest elements \n";
    for(int i=0;i<n;i++){
        cout<<prev[i]<<" ";
    }


    // next greatest elements array
    
    int next [n];
    next[n-1] = -1;
    max = height[n-1];
    for(int i=n-2;i>=0;i--){
        next[i] = max;
        if(max<height[i]) max = height[i];
        
    }
        // minimum array -> prev as minimum
    for(int i=0;i<n;i++){
        prev[i] = min(prev[i],next[i]); // min is inbuilt finction in c++ which give min value auto
    }

    cout<<"\nMini array elements \n";
    for(int i=0;i<n;i++){
        cout<<prev[i]<<" ";
    }
    cout<<endl;



    // calculating water
    int water = 0;
    for(int i=1;i<n-1;i++){
        if(height[i]<prev[i]){
            water+=(prev[i]-height[i]);
        }
    }
    return water;
}
int main(){
    vector<int>bheight;
    int n;
    cout<<"Enter number land size: \n";
    cin>> n;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        bheight.push_back(h);
    }
    cout<<"\nHeigh of building are"<<endl;
    display(bheight);
    cout<<endl;
    int count = trap(bheight);

    cout<<"Total water traps "<<count<<endl;
}


//                                            Method -3 

# include<iostream>
# include<vector>

using namespace std;
void display(vector<int>&v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
int trap (vector<int>&height){
    int n = height.size();
    // previous greatest elements array
    int prev[n];   // naya Array
    prev[0]=-1;    //naya array ka 0th index elements -1 h 
    int max = height [0];  // max mein height ka 0th elements assign h 
    for(int i=1;i<n;i++){
        prev[i] = max; // prev array mein max value assign ho raha h 
        if(max<height[i]) max = height[i];
    }


    //  Changes are done here
    cout<<"Previous greatest elements \n";
    for(int i=0;i<n;i++){
        cout<<prev[i]<<" ";
    }


    // next greatest elements array -> prev as next
    
     prev [n-1];
    //next[n-1] = -1;
    max = height[n-1];
    for(int i=n-2;i>=0;i--){
       // next[i] = max;
       if(max<prev[i]) prev[i] = max;
        if(max<height[i]) max = height[i];
        
    }

    cout<<"\nNext greatest elements \n";
    for(int i=0;i<n;i++){
        cout<<prev[i]<<" ";
    }
    cout<<endl;

    
    // calculating water
    int water = 0;
    for(int i=1;i<n-1;i++){
        if(height[i]<prev[i]){
            water+=(prev[i]-height[i]);
        }
    }
    return water;
}
int main(){
    vector<int>bheight;
    int n;
    cout<<"Enter number land size: \n";
    cin>> n;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        bheight.push_back(h);
    }
    cout<<"\nHeigh of building are"<<endl;
    display(bheight);
    cout<<endl;
    int count = trap(bheight);

    cout<<"Total water traps "<<count<<endl;
}