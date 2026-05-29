# include<iostream>
using namespace std;
class Book{
    public:
    string name;
    int price;
    int NoOfPages;

int countBooks(int p){
    if(price<p){
        return 1;
        else
        return 0;
    }
}
    bool is bookpresent(string book){
        if(name==book){
        return true;
        else 
        return false;
    }
}
};

int main(){
Book harryPotter;
harryPotter.name = "HarryPotter";
harryPotter.price=1000;
harryPotter.NoOfPages=500;
cout<<harryPotter.ispresent("HarryPotter")<<endl<<harryPotter.countBooks(1000);
}