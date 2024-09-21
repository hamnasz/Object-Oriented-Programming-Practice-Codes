#include <iostream>
using namespace std;

void print(int n)
{
    for (int i = 1; i <= n; i++)
    {

        if (n % 2 == 0)
        {
            cout << n << " is even number" << endl;
            break;
        }
        else
        {
            cout << n << " is odd number" << endl;
            break;
        }
    }
}
int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    print(n);
    return 0;
}