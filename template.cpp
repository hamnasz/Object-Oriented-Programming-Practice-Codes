#include <iostream>

using namespace std;

template <typename hamna>
void Hamna (hamna rollNumber)
{
    cout << "My roll number is: " << rollNumber << endl;
}

int main()
{
    int rollNumber = 17;
    Hamna (rollNumber);
    return 0;
}