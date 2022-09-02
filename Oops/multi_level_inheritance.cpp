#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout << "The Roll No is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    int maths;
    int physics;

public:
    void set_number(float, float);
    void get_number();
};

void Exam::set_number(float f1, float f2)
{
    maths = f1;
    physics = f2;
}

void Exam::get_number()
{
    cout << "Maths and Physics Numbers are " << maths << " and " << physics << endl;
}

class Result : public Exam
{
protected:
    float percentage;

public:
    void set_result()
    {
        get_roll_number();
        get_number();
        cout << "The Percentage are " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result Tushar;
    Tushar.set_roll_number(2001163);
    Tushar.set_number(84, 86);
    Tushar.set_result();

    return 0;
}