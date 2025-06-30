#ifndef something_something
#define something_something

#include<array>
#include<string>
#include"Date.h"
#include"Particular.h"
using namespace std;

class CashMemo
{
    protected:

    string Name;
    string Address;
    Date date;
    array< Particular ,7> item;
    int size;

    public:

    static void printMessage();
    CashMemo();
    CashMemo(string name, string address ,Date date ,array< Particular ,7> item);
    int get_size();
    void set_name(string name);
    string get_name();    
    void set_Address(string address);
    string get_Address();
    void set_date(Date d);
    Date get_date();
    void set_particular(int i,string it, int qt ,int ra);
    Particular get_Particular(int i);
    friend istream &operator>>(istream &strm ,CashMemo &c);   
    friend ostream &operator<<(ostream &strm ,CashMemo &c);
};
#endif