#include<array>
#include<string>
#include"cashmemo.h"
#include<iomanip>
using namespace std;


  
    void CashMemo:: printMessage() { 
        cout << "==================SK MART================ "<<endl;
    }
    CashMemo::CashMemo()
    {
        size=0;
         printMessage();
    }

    CashMemo::CashMemo(string name, string address ,Date date ,array< Particular ,7> item)
    {
        Name=name;
        this->date=date;
        Address=address;
        for(int i=0;i<7;i++)
        {
           this->item[i]=item[i];
        }
    }
    void CashMemo:: set_name(string name)
    {
        Name=name;
    }
    string CashMemo::get_name()
    {
        return Name;
    }
    void CashMemo:: set_Address(string address)
    {
        Address=address;
    }
    string CashMemo:: get_Address()
    {
        return Address;
    }
    void CashMemo:: set_date(Date d)
    { date=d; }

    Date CashMemo:: get_date()
    { return date;}

    void CashMemo::set_particular(int i,string it, int qt ,int ra)
    { 
        item[i].set_item(i,it);
        item[i].set_qty(i,qt);
        item[i].set_rate(i,ra);
        size++;
    }

    Particular CashMemo:: get_Particular(int i)
    {
        return item[i];
    }
  
    int CashMemo:: get_size()
    {
        return size;
    }
  
    istream &operator>>(istream &strm ,CashMemo &c)
    {
        cout<<"Enter Name : ";
        getline(strm,c.Name);
        cout<<"Enter Address : ";
        getline(strm,c.Address);
        cout<<"Enter Date : ";
        strm>>c.date;

        return strm;
    }
    ostream &operator<<(ostream &strm ,CashMemo &c)
    {
        cout << "==================SK MART================ "<<endl;
          strm<<"Name : "<<c.get_name()<<"     "<<"Address : "<<c.get_Address()<<"   Date : "<<c.get_date()<<endl;
        
         cout << "------------------------------------------" << endl;
         
          return strm;
    }