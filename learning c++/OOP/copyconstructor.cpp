<<<<<<< HEAD
=======
//copy constructor will copy one object to another


>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
#include<iostream>
using namespace std;
class number 
{
    int a;
    public:
      number(){}
 number(int num){
     a= num;
 }
<<<<<<< HEAD
 number(number &obj){
=======
 number(number &obj){//defination of copy constructor
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
       cout<<"copy constructor is called";
     a= obj.a;
 }
 void display(){
  
     cout<<"the number for this object is "<<a<<endl;
 }
 
};

 

int main()
{
    number x,y,z(45),z2;
    z.display();
<<<<<<< HEAD
    number z1(z);//copy constructor will be invoked
    z1.display();
    z2 =z1;//copy constructor will not be involked
    z1.display();
    number z3 = z;////copy constructor will be invoked
=======
    number z1(z);//copy constructor will be invoked it will copy z data into z1;
    z1.display();
    z2 =z1;//copy constructor will not be involked
    number z3 = z;////copy constructor will be invoked
    z3.display();
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
}