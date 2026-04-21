#include<iostream>
using namespace std;
class date{
private:
  int day;
  int month;
  int year;
public:
  date(int = 1, int = 1, int = 1);
  void display();
};
  date::date(date &date){
  day = date.day;
  month = date.month;
  year = date.year;
  }
  void date::display(){
  cout<<day<<"-"<<month<<"-"<<year<<endl;
  }
int main()
{
    date date1(7,4,2026);
    date date2;
    cout<<"Date 1:";
    date1.display();
    cout<<"Date 2:";
    date2.display();
    
    date date2(date1);
    
    date2.display();
    cout<<endl;
    return 0;
}
