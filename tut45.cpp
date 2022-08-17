#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int r)
    {
        roll_no = r;
    }
    void print_number()
    {
        cout << "Your Roll Number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your marks are: " << endl
             << "Maths = " << maths << endl
             << "Physics = " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
public:
    void display()
    {
        int total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Youre total score is " << total << endl;
    }
};

int main()
{
    Result rafee;
    rafee.set_number(21203083);
    rafee.set_marks(88, 87);
    rafee.set_score(69);
    rafee.display();
    return 0;
}