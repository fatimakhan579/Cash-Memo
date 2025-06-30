#include "date.h"
using namespace std;



    Date::Date() : date(1), month(1), year(2000) {}

    // Parameterized Constructor with Validation
    Date::Date(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            date = d;
            month = m;
            year = y;
        } else {
            date = 1;
            month = 1;
            year = 2000;
            cout << "Invalid date! Setting default (01/01/2000)." << endl;
        }
    }
     bool Date::isValidDate(int d, int m, int y) {
        if (m < 1 || m > 12 || d < 1 || y < 0) return false;

        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        
        // Leap Year Check for February
        if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))) {
            daysInMonth[1] = 29;
        }

        return d <= daysInMonth[m - 1];
    }
    void Date::setdate(int a)
    { 
        if(a > 0 && a <= 31) { date=a; }
    }
    int Date::getdate() {return date;}

    void Date::setmonth (int m)
    {
        if(m>0 && m<=12)
        { month =m;}
    }
    int Date::getmonth(){return month;} 

    void Date::setyear(int y)
    {
        if(y>=0){year = y;}
    }

    int Date::getyear(){return year;}


      void Date::set_date(Date d)
    {
        date=d.date;
        month=d.month;
        year=d.year;
    }
    Date Date::get_date()
    {
        return Date(date,month,year);
    }

    

     ostream & operator<<(ostream &strm ,const Date &d)
    {
     char op='/';
    strm<<d.date<<op<<d.month<<op<<d.year;
         return strm;
    }
     istream & operator>>(istream &strm ,Date& d)
    {
    char op;
    strm>>d.date>>op>>d.month>>op>>d.year;
         if (op != '/' || d.date<=0 || d.date >31 || d.month<=0 || d.month >12 ||d.year < 0) 
        {
            strm.setstate(std::ios::failbit);
        }
    return strm;                   
    }
  