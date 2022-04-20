<<<<<<< HEAD
=======
//virtual declaration is for remove ambiguity 
//here inheritance is done in the form like A derived B and C and these B and c derived D 
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
#include<iostream>
using namespace std;
class student
{
 protected:
 int roll_no;
 public:
 void setnumber(int a)
 {
     roll_no = a;
 }
 void print_number()
 {
     cout<<"your roll no is "<<roll_no<<endl;
 }
};
<<<<<<< HEAD
class test:virtual public student{
=======
class test:virtual public student{//here test is virtual derived class of student
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
    protected:
    float maths, physics;
    public:
    void set_marks(float m1,float m2)
    {
        maths  =m1;
        physics=m2;

    }
    void print_marks(){
        cout<< "your result is here:"<<endl
        <<"maths:"<<maths<<endl
        <<"physics:"<<physics<<endl;
    }
};
<<<<<<< HEAD
class sports:virtual public student{
=======
class sports:virtual public student{//sports is derived from students virtually 
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score()
    {
        cout<<"your pt score is "<<score<<endl;
    }

   

};
<<<<<<< HEAD
 class result : public test, public sports{
=======
 class result : public test, public sports{//here result is derived from two already derived classes (A,B) and this A,B is derived from base class let say c 
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
        private:
        float total;
        public:
        void display()
        {
<<<<<<< HEAD
            total = maths + physics+score;
=======
            total = maths + physics+score;//this maths and physics is derived from test and score is derived from sports
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
            print_number();
            print_marks();
            print_score();
            cout <<"your total score is "<<total<<endl;
        }
    };
int main()
{

    test t1;
    t1.setnumber(1);
    t1.print_number();
    t1.set_marks(45,34);
    t1.print_marks();
    sports s1;
    s1.set_score(55.00);
    s1.print_score();
    result r1;
    r1.display();
// student s1,s2;
// s1.setnumber(1);
// s2.setnumber(2)
// sports
} 