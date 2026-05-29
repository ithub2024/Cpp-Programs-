# include<iostream>
using namespace std;
class Date{
    private:
    int date;
    string month;
    int year;
    public:
    void setDate(int date){
        this->date =date;
    }
    void setmonth(string month){
        this->month = month;
      }     
    void setyear(int year){
         this->year = year;
      }
    int getdate(){
            return date;
    }
     string getmonth(){
        return month;
    }
     int getyaer(){
        return year;
    }
};

int main(){
Date d1 , d2;

d1.setDate(13);
d1.setmonth("September");
d1.setyear (2004);

d2.setDate(28);
d2.setmonth("August");
d2.setyear(2005);

int d1s = d1.getdate();
int d2s = d2.getdate();
if(d1s==d2s){
    cout<<"Equal";
}
else {
    cout<<"Unequal";
}
}