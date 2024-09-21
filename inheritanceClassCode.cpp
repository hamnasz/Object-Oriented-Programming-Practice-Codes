#include <iostream>
using namespace std;

class Teacher
{
public:
    void display()
    {
        cout << "Subject: Oop" << endl
             << "Age : 23" << endl;
    }
};

class Student : public Teacher
{
public:
    void display2()
    {
        cout << " Name : Hamna" << endl
             << "Degree : Artificial Intelligence" 
             << endl << "Semester : Second Semester";
    }
};

int main()
{
    Teacher obj1;
    obj1.display();

    Student obj2;
    obj2.display2();
}