//if base pointer is pointing to derived class then program will run display function of base class
//but if we want that if base pointer pointing to derived class then base pointer will run derived class display then virtual function

#include<iostream>
using namespace std;
class baseclass
{
    
    public:
    int var_base;
   virtual void display()//it will not execute if base pointer pointing to derived class
   {
       cout<<"value of base is "<<var_base;

   }
 
};

class derivedclass: public  baseclass{
public:
int var_derived;
void display(){
     cout<<"value of base is "<<var_derived<<endl;
     cout<<"value of base is "<<var_base<<endl;
}
};
int main()
{
    baseclass* base_class_pointer;
    baseclass base_obj;
    derivedclass derived_obj;

    base_class_pointer = &derived_obj;
    base_class_pointer->display();

}