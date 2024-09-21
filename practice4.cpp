

// Can remove this code
#include <iostream>
using namespace std;

class box
{
public:
    static int length;
    static int breadth;
    static int height;

public:
    static void print()
    {
        cout << "The value of length is: " << length << endl;
        cout << "The value of breadth is: " << breadth << endl;
        cout << "The value of heigth is: " << height << endl;
    }
};
// initialize
int box ::length = 10;
int box ::breadth = 20;
int box ::height = 30;

int main()
{
    box b;

    // cout << "Static Member function is called through object member name: ";
    // b.print();

    cout << "Class Name";
    box::length;
    return 0;
}