#include<iostream>
#include <string>
using namespace std;

class Invoice
{
 public:
  Invoice( string, string, int, int );
  void setPartNumber( string );
  string getPartNumber();
  void setPartDescription(string);
  string getPartDescription();
  void setItemQuantity(int);
  int getItemQuantity();
  void setItemPrice(int);
  int getItemPrice();
  int getInvoiceAmount();
 private:
  string partNumber;
  string partDescription;
  int itemQuantity;
  int itemPrice;
};
Invoice::Invoice( string number, string description, int quantity, int price )
{
 partNumber=number;
 partDescription=description;
 if(quantity>0)
  itemQuantity=quantity;
 else
 {
  itemQuantity=0;
  cout<<"Initial quantity was invalid."<<endl;
 }
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Initial price was invalid."<<endl;
 }
}
void Invoice::setPartNumber( string number)
{
 if ( number.length() <= 25 )
  partNumber = number;
 if ( number.length() > 25 )
 {
  partNumber = number.substr( 0, 25 );
  cout << "Name \"" << number <<"\" exceeds maximum length (25).\n"<< "Limiting partNumber to first 25 characters.\n" << endl;
 }
}
void Invoice::setPartDescription(string description )
{
 if ( description.length() <= 25 )
  partDescription = description;
 if ( description.length() > 25 )
 {
  partDescription = description.substr( 0, 25 );
  cout << "Name \"" << description <<"\" exceeds maximum length (25).\n"<< "Limiting partDescription to first 25 characters.\n" << endl;
 }
}
void Invoice::setItemQuantity(int quantity )
{
 if(quantity>0)
  itemQuantity=quantity;
 else
 {
  itemQuantity=0;
  cout<<"Initial quantity was invalid."<<endl;
 }
}
void Invoice::setItemPrice(int price )
{
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Initial price was invalid."<<endl;
 }
}
string Invoice::getPartNumber()
{
 return partNumber;
}
string Invoice::getPartDescription()
{
 return partDescription;
}
int Invoice::getItemQuantity()
{
 return itemQuantity;
}
int Invoice::getItemPrice()
{
 return itemPrice;
}
int Invoice::getInvoiceAmount()
{
 return itemQuantity*itemPrice;
}
int main()
{
 Invoice Invoice1("afm21","HDD",2,70);
 Invoice Invoice2("eyd45","SSD caddy",10,2);
 cout << "Nomor bagian awal Invoice 1 adalah: "<< Invoice1.getPartNumber()<< "\nDan deskripsi bagiannya adalah: "<< Invoice1.getPartDescription()<<endl;
 cout<< "Jumlah Per Item Adalah : "<< Invoice1.getItemQuantity()<< "\nHarga Per Item adalah : "<< Invoice1.getItemPrice()<< endl;
 cout<<"Jumlah total invoice 1 adalah : "<<Invoice1.getInvoiceAmount()<<endl<<endl;
 cout << "Nomor bagian awal Invoice 2 adalah: "<< Invoice2.getPartNumber()<< "\nDan deskripsi bagiannya adalah: "<< Invoice2.getPartDescription()<<endl;
 cout<< "Jumlah Per Item adalah : "<< Invoice2.getItemQuantity()<< "\nHarga Per Item Adalah : "<< Invoice2.getItemPrice()<< endl;
 cout<<"Jumlah Total Invoice 2 adalah : "<<Invoice2.getInvoiceAmount()<<endl;
}
