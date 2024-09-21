#include <iostream>
using namespace std;

class parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
};

class child : private parent

{
public:
    void get()
    {
        // cout << "Enter the value of a =";
        // cin >> a;

        cout << "Enter The Value of b =";
        cin >> b;

        cout << "Enter The Value of c =";
        cin >> c;
    }
    void show()
    {
        cout << b << endl;
        cout << c << endl;
    }
};

int main()
{
    child obj;
    obj.get();
    obj.show();
    return 0;
}