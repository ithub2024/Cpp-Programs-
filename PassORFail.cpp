# include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks:"<<endl;
    cin>>marks;
    if(marks>=0 && marks<=100){
    marks>=33?cout<<"Pass":cout<<"fail";
    }
    else{
        cout<<"Enter vaild marks";
    }
    return 0;
}
