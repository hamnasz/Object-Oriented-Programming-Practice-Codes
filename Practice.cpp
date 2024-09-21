#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    switch (x) {
        case 1:
            cout << "Positive";
            break;
        default:
            cout << "Negative";
    }
    return 0;
}