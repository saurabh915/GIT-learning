//if we want to count the number of employees in that class the we have to create static variable
//which will increment as many times as we call it.....
//default value of static is zero 
#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    static int count;//this will incremented as many times as we call it . it will not initialised again and again 
    void setId()
    {
        cout << "enter the id of employee" << endl;
        cin >> id;
        count++;
    }
    void getid()
    {
        cout << "id of employee is  " << id;
        cout << "and no of employee is" << count<<endl;
    }
      static void getcount()//this will acess static members and methods only
    {
       // cout<<id; //this will give error as it is not from group of static
        cout << "value of count is " << count<<endl;
    }
  
};
  
int employee ::count;
int main()
{
    employee saurabh, shreyas, sushil;
    saurabh.setId();
    saurabh.getid();
     employee:: getcount();
     saurabh.getcount();
    shreyas.setId();
    shreyas.getid();
    employee :: getcount();
     shreyas.getcount();
    sushil.setId();
    sushil.getid();
    employee :: getcount();
    sushil.getcount();
   
  cout<<"printing saurabh"<<saurabh.count;
}