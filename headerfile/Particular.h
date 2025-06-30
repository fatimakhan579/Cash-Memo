#ifndef PARTICULAR_H
#define PARTICULAR_H

#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Particular {
protected:
    vector<int> qty;
    vector<int> rate;
    vector<string> item;
    int total;
    int size;

public:
    Particular();

    void set_qty(int i, int n);
    int get_qty(int i);

    void set_rate(int i, int n);
    int get_rate(int i);

    void set_item(int i, string n);
    string get_item(int i);

    friend istream &operator>>(istream &strm, Particular &p);
    friend ostream &operator<<(ostream &strm, Particular &p);

    int total_amount();
};

#endif 
