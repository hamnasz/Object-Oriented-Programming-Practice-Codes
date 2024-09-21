#include <iostream>
using namespace std;

union Student
{
  int id;
  float marks;
};

int main()
{
  Student student1;

  student1.id = 123;
  student1.marks = 85.5;

  cout << "Student ID: " << student1.id << endl;
  cout << "Student Marks: " << student1.marks << endl;

  return 0;
}