#include <iostream>
using namespace std;

class Hamna
{
private:
  string name;
  int age;
  char gender;
  string occupation;
  char cook;

  bool isMale() const
  {
    return gender == 'm';
  }

  bool isFemale() const
  {
    return gender == 'f'
  }

public:
  Hamna()
};