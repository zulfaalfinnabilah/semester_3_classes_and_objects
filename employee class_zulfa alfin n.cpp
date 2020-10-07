#include<iostream>
#include <string>
using namespace std;

class Employee
{
 public:
  Employee( string, string, int );
  void setFirstName( string );
  string getFirstName();
  void setLastName(string);
  string getLastName();
  void setMonthlySalary(int);
  int getMonthlySalary();
 private:
  string firstName;
  string lastName;
  int monthlySalary;
};
Employee::Employee( string first, string last, int salary)
{
 firstName=first;
 lastName=last;
 if(salary>0)
  monthlySalary=salary;
 else
 {
  monthlySalary=0;
  cout<<"Initial salary was invalid."<<endl;
 }
}
void Employee::setFirstName( string first)
{
 if ( first.length() <= 25 )
  firstName = first;
 if ( first.length() > 25 )
 {
  firstName = first.substr( 0, 25 );
  cout << "Name \"" << first <<"\" exceeds maximum length (25).\n"<< "Limiting firstName to first 25 characters.\n" << endl;
 }
}
void Employee::setLastName(string last )
{
 if ( last.length() <= 25 )
  lastName = last;
 if ( last.length() > 25 )
 {
  lastName = last.substr( 0, 25 );
  cout << "Name \"" << last <<"\" exceeds maximum length (25).\n"<< "Limiting lastName to first 25 characters.\n" << endl;
 }
}
void Employee::setMonthlySalary(int salary )
{
 if(salary>0)
  monthlySalary=salary;
 else
 {
  monthlySalary=0;
  cout<<"Initial salary was invalid."<<endl;
 }
}
string Employee::getFirstName()
{
 return firstName;
}
string Employee::getLastName()
{
 return lastName;
}
int Employee::getMonthlySalary()
{
 return monthlySalary;
}
int main()
{
 Employee Employee1("Zulfa","Nabilah",3000);
 Employee Employee2("Rena","Maulidiyah",4500);
 cout << "Nama Karyawan 1 : "<< Employee1.getFirstName()<<" "<< Employee1.getLastName()<<endl;
 cout<< "Gaji Bulanan: "<< Employee1.getMonthlySalary()<< " Dan gaji tahunan: "<< Employee1.getMonthlySalary()*12<< endl;
 cout<<"Setelah kenaikan gaji 10 persen :"<<endl;
 int incrementedSalary1=Employee1.getMonthlySalary();
 incrementedSalary1=incrementedSalary1+(incrementedSalary1*0.1);
 Employee1.setMonthlySalary(incrementedSalary1);
 cout<< "Gaji Bulanan Karyawan : "<< Employee1.getMonthlySalary()<< " Dan gaji tahunan: "<< Employee1.getMonthlySalary()*12<<endl<<endl;
 
 cout << "Nama Karyawan 2: "<< Employee2.getFirstName()<<" "<< Employee2.getLastName()<<endl;
 cout<< "Gaji Bulanan: "<< Employee2.getMonthlySalary()<< " Dan gaji tahunan: "<< Employee2.getMonthlySalary()*12<< endl;
 cout<<"Setelah kenaikan gaji 10 persen :"<<endl;
 int incrementedSalary2=Employee2.getMonthlySalary();
 incrementedSalary2=incrementedSalary2+(incrementedSalary2*0.1);
 Employee2.setMonthlySalary(incrementedSalary2);
 cout<< "Gaji Bulanan Karyawan: "<< Employee2.getMonthlySalary()<< " Dan gaji tahunan : "<< Employee2.getMonthlySalary()*12<< endl;
}

