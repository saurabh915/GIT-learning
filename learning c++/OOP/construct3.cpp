#include<iostream>
#include<math.h>
using namespace std;
class point 
{
    int a,b;
    public:
 
<<<<<<< HEAD
    friend void difference(point , point );
=======
    friend void difference(point , point );//here declaration of friend takes place
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
    point(int x, int y) 
    {
        a=x;
        b=y;
        cout<<"the point is ("<<x<<","<<y<<")"<<endl;

    }
   
};
<<<<<<< HEAD
 void difference(point o1,point o2)
=======
 void difference(point o1,point o2)//this function is not part of point class at all
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
    {
        int xdiff = o1.a -o2.a;
        int ydiff= o1.b-o2.b;
      double distance =sqrt((xdiff*xdiff)+(ydiff*ydiff));
       cout<<"difference is"<<distance;
    }
 
int main()
{
<<<<<<< HEAD
point c(5,7),d(4,7);
=======
point c(5,7),d(4,7);//construtors are called 
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87

 difference(c,d);
}