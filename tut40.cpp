#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is : " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The numbers of Maths are: " << maths << endl;
    cout << "The numbers of physics are: " << physics << endl;
}

class result : public Exam
{
    // float percentage = (maths + physics) / 2;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "You get " << (maths + physics) / 2 << "% marks in your exam." << endl;
    }
};

int main()
{
    result rafee;
    rafee.set_roll_number(69);
    rafee.set_marks(90, 96);
    rafee.display();

    return 0;
}