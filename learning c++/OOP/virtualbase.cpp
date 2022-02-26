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
class test:virtual public student{
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
class sports:virtual public student{
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
 class result : public test, public sports{
        private:
        float total;
        public:
        void display()
        {
            total = maths + physics+score;
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