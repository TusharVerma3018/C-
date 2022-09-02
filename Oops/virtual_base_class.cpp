#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_number(int r)
    {
        roll_no = r;
    }
    void get_roll_number()
    {
        cout << "Your Roll Number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_number(float n1, float n2)
    {
        maths = n1;
        physics = n2;
    }
    void get_number()
    {
        cout << "Your Result is here:" << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Score : virtual public Student
{
protected:
    int score;

public:
    void set_score(int n1)
    {
        score = n1;
    }
    void get_score()
    {
        cout << "Your P.T Score is : " << score << endl;
    }
};

class Result : public Test, public Score
{
protected:
    int Total;

public:
    void Display()
    {
        Total = maths + physics + score;
        get_roll_number();
        get_number();
        get_score();
        cout << "Total : " << Total << endl;
    }
};

int main()
{
    Result Tushar;
    Tushar.set_roll_number(2001163);
    Tushar.set_number(8.5, 9.5);
    Tushar.set_score(9);
    Tushar.Display();

    return 0;
}