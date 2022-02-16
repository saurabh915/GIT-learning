#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    static int count;
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
      static void getcount()
    {
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