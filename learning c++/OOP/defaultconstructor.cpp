#include<iostream>
using namespace std;
class complex
{
 int a,b;
 public:
<<<<<<< HEAD
 complex(int x, int y=10)
=======
 complex(int x, int y=10)//default value of y is taken ass 10;
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
 {
     a=x;
     b =y;
          printf("constructor with two parameter is constructed");

 }
//  complex(int x)
//  {
//      a=x;
//      b =0;
//      printf("constructor with one parameter is constructed");
//  }
};
int main()
{
complex b(5); 
}