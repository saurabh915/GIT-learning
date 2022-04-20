<<<<<<< HEAD
=======

//here y is not function of x or y but it can acess the private variables of classx and classy
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
#include<iostream>
using namespace std;
class Y;
class X 
{
    int data;
    public:
    void setvalue(int value){
     data =value;
    }
<<<<<<< HEAD
     friend void  add(X, Y);
=======
     friend void  add(X, Y);//synatax of friend function
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
};
class Y
{
    int num;
    public:
    void setvalue(int value){
     num =value;
    }
      friend void  add(X, Y);
};



void add(X o1, Y o2)
{
    cout<<"summing the data of x and y give me"<<o1.data +o2.num;
}

int main()
{
    X a1;
    a1.setvalue(3);
    Y b1;
     b1.setvalue(5);
     add(a1,b1);

}