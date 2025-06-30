#include"Particular.h"
using namespace std;


    Particular::Particular(): total(0), size(0){}

    void Particular::set_qty(int i ,int n)
    {  if (i >= qty.size()) qty.resize(i + 1); 
      qty[i]=n; }

    int Particular::get_qty(int i)
    { return qty[i];}

    void Particular::set_rate(int i, int n)
    {   if (i >= rate.size()) rate.resize(i + 1);
      rate[i]=n;}

    int Particular::get_rate(int i)
    { return rate[i];}

    void Particular::set_item(int i, string n)
    {  if (i >= item.size()) item.resize(i + 1);
      item[i]=n;}

    string Particular::get_item(int i)
    { return item[i];}
     
   
   istream &operator>>(istream &strm ,Particular & p)
   {
      cout << "Enter the number of items: ";
    int numItems;
    strm >> numItems;

    
    p.qty.resize(numItems);
    p.rate.resize(numItems);
    p.item.resize(numItems);
    p.total = 0; 
    p.size = numItems;

    // cout<<"enter item name and quantity and rate  respectively : \n";
     for(int i=0;i<numItems ;i++)
      {
         cout<<"enter item "<<i+1<<" name : ";
         strm>>p.item[i];
         cout<<"enter item "<<i+1<<" quantity :";
         strm>>p.qty[i];
          cout<<"enter item "<<i+1<<" rate : ";
         strm>>p.rate[i];
       
         p.total=p.total+(p.qty[i]*p.rate[i]);
        
      }
      return strm;
   }

  ostream &operator<<(ostream & strm,Particular & p)
   {
    cout << left << setw(20) << "Qty" << setw(10) << "Item  " << setw(10) << "Price"<< endl;
    cout << "------------------------------------------" << endl;
    for(int i=0;i<p.size;i++)
      {
         strm<<left<< setw(20) <<p.get_qty(i)<<setw(10)<<p.get_item(i)<<setw(10)<<p.get_rate(i)<<endl;
         
         cout << "------------------------------------------" << endl;
      }
       cout<<left<<"Total :   "<<p.total_amount()<<endl;

     return strm;
   }
   int Particular::total_amount()
   { 
    return total;
   }


    