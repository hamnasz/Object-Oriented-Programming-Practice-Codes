#include <iostream>
using namespace std;

int main()
{
    int n, arr[10], i, j;
    cout << "Enter Number: ";
    cin >> n;

    cout << "Enter Random Numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Prime Numbers from values You Entered: ";
    for (i = 0; i < n; i++)
    {
        for (j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
                break;
        }
    }
    if (j == arr[i])
    {
        cout << arr[i] << " ";
    }
}