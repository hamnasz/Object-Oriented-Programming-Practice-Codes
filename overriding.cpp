#include <iostream>
using namespace std;
class animal
{
    public:
    void print()
    {
        cout << "Include All Animals: ";
    }
};

class Dog: public animal
{
    public:
    void print()
    {
        cout << "Include Dogs Only";
    }
};

int main()
{
    animal obj;
    obj.print();
}