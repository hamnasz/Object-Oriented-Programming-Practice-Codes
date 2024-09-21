#include <iostream>
using namespace std;

union test
{
    int n;
    float f;
    char ch;
};
int main()
{
    test variable;
    variable.n = 100;
    cout << variable.n << endl;
    cout << variable.f << endl;
    cout << variable.ch;
}