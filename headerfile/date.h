#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
protected:
    int date;
    int month;
    int year;

public:
    Date(); 
    Date(int d, int m, int y); 

    static bool isValidDate(int d, int m, int y);


    void setdate(int a);
    void setmonth(int m);
    void setyear(int y);
    void set_date(Date d);

   
    int getdate();
    int getmonth();
    int getyear();
    Date get_date();

    
    friend ostream& operator<<(ostream& strm, const Date& d);
    friend istream& operator>>(istream& strm, Date& d);
};

#endif 